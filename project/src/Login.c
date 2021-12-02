#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>


struct User
{
    char name[20];
    char pwd[20];
} U;

void SignUp();

int main(void)
{
    int opt;
    scanf("%d", &opt);

    if (opt == 1)
        SignUp();
    system("pause");
}

void SignUp()
{
    char NewName[20] = {' '};
    char ch;
    int i;
    FILE *fp;

    if (fp == NULL)
        printf("Error in Opening the file");
    fp = fopen("user.dat", "ab+");
    printf("User name:");
    fflush(stdin);
    scanf("%[^\n]", NewName);

    while (fread(&U, sizeof(U), 1, fp) == 1)
    {
        if (strcmp(U.name, NewName)) //相同
        {
            printf("User name has already exist.");
            fclose(fp);
            return;
        }
    }

    fflush(stdin);
    i = 0;
    /*while ((U.pwd[i] = getch()) != '\r') {
        if (U.pwd[i] == '\b') {
            printf("\b b");
            i--;
        }
        else {
            putchar('*');
            i++;
        }
    }
    U.pwd[i] = '\0';*/
    
    printf("请输入你的密码:\n");
    char a[20];
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

    if (fwrite(&U, sizeof(U), 1, fp))
    {
        puts("Saved sucessfully!");
        fclose(fp);
    }
    else
    {
        puts("\aFail to save!!\a");
    }
}