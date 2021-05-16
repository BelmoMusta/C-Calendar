#include <time.h>
#include "colors.c"

char *days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
char *months[12] = {"January", "February",
                    "Mars", "April",
                    "May", "June",
                    "July", "August",
                    "September", "October",
                    "November", "December"};
int nbDaysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void printDaysNames() {
    int i;
    for (i = 0; i < 7; ++i) {
        if (i == 0) {
            red();
        } else {
            green();
        }
        printf("%-8s", days[i]);
    }


}

int getFirstDayOfMonth(int month, int year) {
    struct tm t;
    t.tm_year = year - 1900;
    t.tm_mon = month;
    t.tm_mday = 1;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 1;
    t.tm_isdst = 0;
    mktime(&t);
    return t.tm_wday;
}

int getLastDayOfMonth(int month) {
    int lastDayOfMonth = nbDaysPerMonth[month - 1];
    return lastDayOfMonth;
}


void printDaysOfMonthByYear(int month, int year) {
    int firstDayOfMonth = getFirstDayOfMonth(month - 1, year);
    int i;
    int daysCount = 1;
    for (i = 0; i < 7; ++i) {
        if (i == 0) {
            red();
        } else {
            resetColors();
        }
        if (i < firstDayOfMonth) {
            printf("%-8s", "-");
        } else {
            printf("%-8d", daysCount++);
        }
    }
    lineBreak();
    int c = 0;
    int lastDayOfMonth = getLastDayOfMonth(month);
    for (i = daysCount; i <= lastDayOfMonth; ++i) {
        c++;
        if (c % 7 == 1) {
            red();
        } else {
            resetColors();
        }
        printf("%-8d", daysCount++);
        if (c % 7 == 0) {
            lineBreak();
        }
    }
}



