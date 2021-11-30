/*********************
 * 添加日程，查询日程   *
 * *******************/
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

void AddSchedule(void)
{
    FILE *fp;
    fp = fopen("schedule.dat", "ab+");
    int i;

    system("cls");
    //边框
    PrintRows(42, 75, 8, UP);
    PrintColumns(9, 13, 42); //左
    PrintRows(42, 75, 14, DOWN);
    PrintColumns(9, 13, 75); //右
    go(45, 10);
    printf("请输入要添加的日期(年/月/日)");
    go(53, 12);
    printf("____ __ __\b\b\b\b\b\b\b\b\b\b");
    scanf("%d%d%d", &S.yy, &S.mm, &S.dd);

    system("cls");
    //边框
    PrintRows(40, 80, 6, UP);
    PrintColumns(7, 16, 40); //左
    PrintRows(40, 80, 17, DOWN);
    PrintColumns(7, 16, 80); //右
    go(45, 9);
    printf("输入 %04d年%02d月%02d日 的日程内容: ", S.yy, S.mm, S.dd);
    go(54, 10);
    printf("(不超100字)");
    fflush(stdin);
    go(45, 12);
    scanf("%[^\n]", S.note);

    //边框
    PrintRows(40, 80, 18, UP);
    PrintColumns(19, 25, 40);//左
    PrintRows(40, 80, 25, DOWN);
    PrintColumns(19, 24, 80);//右
    go(43, 21);
    printf("1.重要且紧急");
    go(63, 21);
    printf("2.重要不紧急");
    go(43, 23);
    printf("3.不重要但紧急");
    go(63, 23);
    printf("4.不重要不紧急");
    go(53, 19);
    printf("输入四象限分类: ");
    scanf("%d", &S.impo);

    system("cls");
    //边框
    PrintRows(42, 75, 8, UP);
    PrintColumns(9, 13, 42); //左
    PrintRows(42, 75, 14, DOWN);
    PrintColumns(9, 13, 75); //右
    go(53, 10);
    if (fwrite(&S, sizeof(S), 1, fp)) {
        puts("日程保存成功");
        fclose(fp);
    }
    else
        puts("\a日程保存失败\a");
    go(51, 12);
    system("pause");
    fclose(fp);
    main();
}

void ShowSchedule(int yy, int mm, int dd)
{
    FILE *fp;
    int row1, row2, row3, row4;
    row1 = row2 = row3 = row4 = 1;
    fp = fopen("schedule.dat", "rb");

    system("cls");
    if (fp == NULL) {
        go(92, 0);
        printf("未能成功打开文件\n");
        return;
    }

    PrintColumns(1, 28, 103);
    go(89, 13);
    printf("━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━");
    go(96, 0);
    color(Highlight());
    printf("%04d-%02d-%02d",yy,mm,dd);
    color(DefaultColor());
    printf("的日程");
    go(92, 1);
    printf("重要且紧急");
    go(105, 1);
    printf("重要不紧急");
    go(90, 14);
    printf("不重要但紧急");
    go(105, 14);
    printf("不重要不紧急");

    while (fread(&S, sizeof(S), 1, fp) == 1)
    {
        if (S.yy == yy && S.mm == mm && S.dd == dd) {
            switch (S.impo)
            {
                case 1:
                    go(92, ++row1);
                    puts(S.note);
                    break;
                case 2:
                    go(105, ++row2);
                    puts(S.note);
                    break;
                case 3:
                    go(90, ++row3 + 13);
                    puts(S.note);
                    break;
                default:
                    go(105, ++row4 + 12);
                    puts(S.note);
                    break;
            }
        }
    }

    //列表形式
    /*while (fread(&S, sizeof(S), 1, fp) == 1)
    {
        if (S.yy == yy && S.mm == mm && S.dd == dd)
        {
            row++;//空行
            go(90, row++);
            printf("当日的第 %d 个日程是: %s\n", i + 1, S.note);
            go(90, row++);
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
        printf("未能在当日查询到日程\n");*/

}