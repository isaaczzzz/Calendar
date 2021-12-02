#include <stdio.h>

#include <conio.h>

int main(void)

{

    char a[20];

    int i = 0;

    printf("请输入你的密码:\n");

    while (i < 19 && (a[i] = getch()) != '\r')

    {
        if (a[i] == '\b')

        {

            printf("\b b");

            i--;
        }

        else

        {

            putchar('*');

            i++;
        }
    }

    a[i] = '\0';

    printf("\n你的密码是:%s", a);

    getch();

    return 0;
}