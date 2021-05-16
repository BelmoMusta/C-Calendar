#include <stdio.h>
#include "dates.c"

void fprintSeparator(FILE *fp, char c, int count);

void fprintLineSeparator(FILE *fp);

void fprintDaysNames(FILE *fp);

void flineBreak(FILE *fp);

void fprintDaysOfMonthByYear(FILE *fp, int month, int year);

const char *createFileName(char *c, int j);

void fprintCalendar(int month, int year) {
    FILE *fp;
    char *monthName = months[month - 1];
    const char *fileName = createFileName(monthName, year);
    fp = fopen(fileName, "w+");
    fprintf(fp, "%*s%s-%d\n", 20, "", monthName, year);
    fprintLineSeparator(fp);
    fprintDaysNames(fp);
    flineBreak(fp);
    fprintLineSeparator(fp);
    fprintDaysOfMonthByYear(fp, month, year);
    flineBreak(fp);
    fprintLineSeparator(fp);
    fclose(fp);
}

void flineBreak(FILE *fp) {
    fputc('\n', fp);
}

void fprintDaysNames(FILE *fp) {
    int i;
    for (i = 0; i < 7; ++i) {
        fprintf(fp, "%-8s", days[i]);
    }
}

void fprintSeparator(FILE *fp, char c, int count) {

    int i;
    for (i = 0; i < count; i++) {
        fputc(c, fp);
    }
    flineBreak(fp);
}

void fprintLineSeparator(FILE *fp) {
    fprintSeparator(fp, '-', 51);
}

void fprintDaysOfMonthByYear(FILE *fp, int month, int year) {
    int firstDayOfMonth = getFirstDayOfMonth(month - 1, year);
    int daysCount = 1;
    int i;
    for (i = 0; i < 7; ++i) {

        if (i < firstDayOfMonth) {
            fprintf(fp, "%-8s", "-");
        } else {
            fprintf(fp, "%-8d", daysCount++);
        }
    }
    flineBreak(fp);
    int c = 0;
    int lastDayOfMonth = getLastDayOfMonth(month);
    for (i = daysCount; i <= lastDayOfMonth; ++i) {
        c++;
        fprintf(fp, "%-8d", daysCount++);
        if (c % 7 == 0) {
            flineBreak(fp);
        }
    }
}

const char *createFileName(char *c, int j) {
    char *str = malloc(40);
    sprintf(str, "%s-%d.txt", c, j);
    return str;
}
