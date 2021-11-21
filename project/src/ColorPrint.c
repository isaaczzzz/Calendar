#include <stdio.h>
#include <windows.h>

void color_print(const char *s, int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7); //改回默认白色
}

void code_error(void) { color_print("\nIllegal code.\n", 4); }

void database_full(void) { color_print("\nDatabase is full; can't add more students.\n", 4); }

void database_empty(void) { color_print("\nDatabase is empty. Please insert data.\n", 4); }

void exist(void) { color_print("\nStudent already exists.\n", 2); }

void not_found(void) { color_print("\nStudent not found.\n", 4); }

void lucky_student(int id, char *name)
{
    printf("The lucky student is:\n\n");
    Sleep(2000);
    printf("%d  ", id);
    color_print(name, 2);
    putchar('\n');
}