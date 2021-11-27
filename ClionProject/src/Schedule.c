/*********************
 * 添加日程，查询日程   *
 * *******************/
#include <stdio.h>
#include <stdlib.h>
#include "connection.h"

#define MAX_LENGTH 205

struct Schedule
{
    int yy;
    int mm;
    int dd;
    char note[MAX_LENGTH];
    int impo;
} S;

/*
int main(void)
{
    system("chcp 936");
    system("cls");

    AddSchedule();
    ShowSchedule();
    return 0;
}*/

void AddSchedule()
{
    FILE *fp;
    fp = fopen("schedule.dat", "ab+");
    int i;

    system("cls");
    go(45, 10);
    printf("请输入要添加的日期(年/月/日)");
    go(53, 12);
    printf("____ __ __\b\b\b\b\b\b\b\b\b\b");
    scanf("%d%d%d", &S.yy, &S.mm, &S.dd);
    printf("输入日程内容(不超过100字): ");
    fflush(stdin);
    scanf("%[^\n]", S.note);
    printf("输入四象限分类: (1:重要且紧急/2:重要不紧急/3:不重要但紧急/4:不重要不紧急):_\b");
    scanf("%d", &S.impo);
    if (fwrite(&S, sizeof(S), 1, fp))
    {
        puts("日程保存成功");
        fclose(fp);
    }
    else
        puts("\a日程保存失败\a");
    printf("按下任意键继续............\n");
    getchar();
    getchar();
    fclose(fp);
}

void ShowSchedule(int yy, int mm, int dd)
{
    FILE *fp;
    int i = 0, isFound = 0;
    fp = fopen("schedule.dat", "rb");

    system("cls");
    
    system("cls");
    if (fp == NULL) {
        printf("未能成功打开文件\n");
        return;
    }
    while (fread(&S, sizeof(S), 1, fp) == 1)
    {
        if (S.yy == yy && S.mm == mm && S.dd == dd)
        {
            printf("当日的第 %d 个日程是: %s\n", i + 1, S.note);
            printf("重要等级为: ");
            switch (S.impo)
            {
            case 1:
                puts("重要且紧急");
                break;
            case 2:
                puts("重要不紧急");
                break;
            case 3:
                puts("不重要但紧急");
                break;
            default:
                puts("不重要不紧急");
                break;
            }
            isFound = 1;
            i++;
        }
    }
    if (isFound == 0)
        printf("未能在当日查询到日程\n");
    printf("按下任意键继续............");
    getchar();
    getchar();
}