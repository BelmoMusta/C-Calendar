
#include <windows.h>

void green() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
}

void red() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
}

void resetColors() {
    WORD wColor = (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

void lineBreak() { putchar('\n'); }

void printSeparator(char c, int count) {

    int i;
    for (i = 0; i < count; i++) {
        putchar(c);
    }
    lineBreak();
}

void concat(){
    const char* str1 = "hello there";
    int n1 = 1234;

    char *num;
    char buffer[41];

    if (asprintf(&num, "%d", n1) == -1) {
        perror("asprintf");
    } else {
        strcat(strcpy(buffer, str1), num);
        printf("%s\n", buffer);
        free(num);
    }
}




