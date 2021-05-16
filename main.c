#include <stdio.h>
#include "files.c"

void printLineSeparator();

void printCalendar();

void nextMonth();

void previousMonth();

void nextYear();

int month;
int year;

int main() {

    printf("This program shows calendar of a given month. Enter month, year... format is mm-yyyy\n");
    printf("Commands : ");
    lineBreak();
    printLineSeparator();
    printf("Type n for the next month");
    lineBreak();
    printf("- Type p for the previous month");
    lineBreak();
    printf("- Type y for the next year");
    lineBreak();
    printf("- Type t for the previous year");
    lineBreak();
    printf("- Type i to input a new month and year");
    lineBreak();
    printf("- Type f to print the current calendar to a file");
    lineBreak();
    printf("- Type e to exit the program");
    lineBreak();
    printLineSeparator();

    printf("Enter mm-yyyy: ");
    scanf("%02d-%04d", &month, &year);
    char pressedKey;
    do {
        printCalendar();
        pressedKey = getchar();
        if (pressedKey == 10) {
            pressedKey = getchar();
        }
        if (pressedKey == 'n' || pressedKey == 'N') {
            nextMonth();
            printCalendar();
        } else if (pressedKey == 'p' || pressedKey == 'P') {
            previousMonth();
            printCalendar();
        } else if (pressedKey == 'y' || pressedKey == 'Y') {
            nextYear();
            printCalendar();
        } else if (pressedKey == 't' || pressedKey == 'T') {
            nextYear();
            printCalendar();
        } else if (pressedKey == 'f' || pressedKey == 'F') {
            fprintCalendar(month, year);
        } else if (pressedKey == 'i' || pressedKey == 'I') {
            printf("Enter mm-yyyy: ");
            scanf("%02d-%04d", &month, &year);
            printCalendar();
        }
    } while (pressedKey != 'e' && pressedKey != 'E');
    return 0;
}

void nextYear() {
    year++;
}

void nextMonth() {
    if (month == 12) {
        month = 1;
        year++;
    } else {
        month++;
    }
}

void previousMonth() {
    if (month == 1) {
        month = 12;
        year--;
    } else {
        month--;
    }
}

void printCalendar() {
    printf("%*s%s-%d\n", 20, "", months[month - 1], year);
    printLineSeparator();
    printDaysNames();
    resetColors();
    lineBreak();
    printLineSeparator();
    printDaysOfMonthByYear(month, year);
    lineBreak();
    printLineSeparator();
}


void printLineSeparator() { printSeparator('-', 51); }
