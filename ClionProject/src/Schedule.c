/*********************
 * ����ճ̣���ѯ�ճ�   *
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

    system("cls");
    //�߿�
    PrintRows(42, 75, 8, UP);
    PrintColumns(9, 13, 42); //��
    PrintRows(42, 75, 14, DOWN);
    PrintColumns(9, 13, 75); //��
    go(45, 10);
    printf("������Ҫ��ӵ�����(�� �� ��)");
    go(53, 12);
    printf("____ __ __\b\b\b\b\b\b\b\b\b\b");
    scanf("%d%d%d", &S.yy, &S.mm, &S.dd);

    system("cls");
    //�߿�
    PrintRows(40, 80, 6, UP);
    PrintColumns(7, 16, 40); //��
    PrintRows(40, 80, 17, DOWN);
    PrintColumns(7, 16, 80); //��
    go(45, 9);
    printf("���� %04d��%02d��%02d�� ���ճ�����: ", S.yy, S.mm, S.dd);
    go(54, 10);
    printf("(����100��)");
    fflush(stdin);
    go(45, 12);
    scanf("%[^\n]", S.note);

    //�߿�
    PrintRows(40, 80, 18, UP);
    PrintColumns(19, 25, 40); //��
    PrintRows(40, 80, 25, DOWN);
    PrintColumns(19, 24, 80); //��
    go(43, 21);
    printf("1.��Ҫ�ҽ���");
    go(63, 21);
    printf("2.��Ҫ������");
    go(43, 23);
    printf("3.����Ҫ������");
    go(63, 23);
    printf("4.����Ҫ������");
    go(53, 19);
    printf("���������޷���: ");
    scanf("%d", &S.impo);

    system("cls");
    //�߿�
    PrintRows(42, 75, 8, UP);
    PrintColumns(9, 13, 42); //��
    PrintRows(42, 75, 14, DOWN);
    PrintColumns(9, 13, 75); //��
    go(53, 10);
    if (fwrite(&S, sizeof(S), 1, fp))
    {
        puts("�ճ̱���ɹ�");
        fclose(fp);
    }
    else
        puts("\a�ճ̱���ʧ��\a");
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
    if (fp == NULL)
    //Schedule.dat���������Զ�����
    {
        fclose(fp);
        fp = fopen("Schedule.dat", "wb+");
        fclose(fp);
    }

    PrintColumns(1, 28, 87);
    go(73, 13); //89
    printf("�����������������������������贈��������������������������");
    go(80, 0);
    color(Today());
    switch (ReturnFormat())
    {
    case 1:
        printf("%04d-%02d-%02d", yy, mm, dd);
        break;
    case 2:
        printf("%02d-%02d-%04d", dd, mm, yy);
        break;
    case 3:
        printf("%02d-%02d-%04d", mm, dd, yy);
        break;
    }
    color(DefaultColor());
    printf("���ճ�");
    go(76, 1);
    printf("��Ҫ�ҽ���");
    go(89, 1);
    printf("��Ҫ������");
    go(74, 14);
    printf("����Ҫ������");
    go(89, 14);
    printf("����Ҫ������");

    while (fread(&S, sizeof(S), 1, fp) == 1)
    {
        if (S.yy == yy && S.mm == mm && S.dd == dd)
        {
            switch (S.impo)
            {
            case 1:
                go(76, ++row1);
                puts(S.note);
                break;
            case 2:
                go(89, ++row2);
                puts(S.note);
                break;
            case 3:
                go(74, ++row3 + 13);
                puts(S.note);
                break;
            default:
                go(89, ++row4 + 13);
                puts(S.note);
                break;
            }
        }
    }
    fclose(fp);

    //�б���ʽ
    /*while (fread(&S, sizeof(S), 1, fp) == 1)
    {
        if (S.yy == yy && S.mm == mm && S.dd == dd)
        {
            row++;//����
            go(90, row++);
            printf("���յĵ� %d ���ճ���: %s\n", i + 1, S.note);
            go(90, row++);
            printf("��Ҫ�ȼ�Ϊ: ");
            switch (S.impo)
            {
            case 1:
                puts("��Ҫ�ҽ���");
                break;
            case 2:
                puts("��Ҫ������");
                break;
            case 3:
                puts("����Ҫ������");
                break;
            default:
                puts("����Ҫ������");
                break;
            }
            isFound = 1;
            i++;
        }
    }
    if (isFound == 0)
        printf("δ���ڵ��ղ�ѯ���ճ�\n");*/
}

void RecommendSchedule(int x, int y)
{
    FILE *fp;
    int time[6] = {0};
    int weight, fst, snd, trd, yy, mm, dd;
    struct Schedule Rec1, Rec2, Rec3;
    fst = 0;
    snd = -1;
    trd = -2;

    ReturnThisTime(time);
    yy = time[5];
    mm = time[4] + 1; // 0 ~ 11

    fp = fopen("schedule.dat", "rb");
    if (fp == NULL)
    //Schedule.dat���������Զ�����
    {
        fclose(fp);
        fp = fopen("Schedule.dat", "wb+");
        fclose(fp);
    }
    for (int i = 0; i < 5; i++)
    {
        dd = time[3] + i;
        if (dd > NumberOfDays(mm - 1, yy))
        { // �β���mmΪ0~11
            printf("%d\n", NumberOfDays(mm, yy));
            dd = 1;
            mm++;
            if (mm > 11)
            {
                mm = 1;
                yy++;
            }
        }

        fseek(fp, 0, SEEK_SET); //�ļ�ָ���ƻؿ�ͷ�����¶�ȡ

        while (fread(&S, sizeof(S), 1, fp) == 1)
        {
            weight = 0;
            if (S.yy == yy && S.mm == mm && S.dd == dd)
            {
                /*Ȩ�ؼ��㣬�������ں���Ҫ������*/
                weight = (5 - i) + (4 - S.impo);
                if (fst < weight)
                {
                    Rec2 = Rec1;
                    snd = fst;
                    Rec1 = S;
                    fst = weight;
                }
                else if (snd < weight)
                {
                    Rec3 = Rec2;
                    trd = snd;
                    Rec2 = S;
                    snd = weight;
                }
                else if (trd < weight)
                {
                    Rec3 = S;
                    trd = weight;
                }
            }
        }
    }
    fclose(fp);
    go(x, y);
    color(DefaultColor());
    printf("���ڵ��Ƽ��ճ�: ");
    go(x, y + 2);
    color(DefaultColor());
    printf("1. %s\n", Rec1.note);
    go(x, y + 4);
    color(DefaultColor());
    printf("2. %s\n", Rec2.note);
    go(x, y + 6);
    color(DefaultColor());
    printf("3. %s\n", Rec3.note);
}