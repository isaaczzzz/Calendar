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
    int i;

    system("cls");
    //�߿�
    PrintRows(42, 75, 8, UP);
    PrintColumns(9, 13, 42); //��
    PrintRows(42, 75, 14, DOWN);
    PrintColumns(9, 13, 75); //��
    go(45, 10);
    printf("������Ҫ��ӵ�����(��/��/��)");
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
    PrintColumns(19, 25, 40);//��
    PrintRows(40, 80, 25, DOWN);
    PrintColumns(19, 24, 80);//��
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
    if (fwrite(&S, sizeof(S), 1, fp)) {
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
    int i = 0, isFound = 0, row = 0;
    fp = fopen("schedule.dat", "rb");

    go(90, row);
    system("cls");
    if (fp == NULL) {
        printf("δ�ܳɹ����ļ�\n");
        return;
    }

    while (fread(&S, sizeof(S), 1, fp) == 1)
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
        printf("δ���ڵ��ղ�ѯ���ճ�\n");
    getchar();
    getchar();
}

void PrintRows(int from, int to, const int column, bool uod)
{
    go(from, column);
    if(uod)
        printf("��");
    else
        printf("��");

    for (++from; from <= to - 1; from++) {
        go(from, column);
        printf("��");
    }

    go(from, column);
    if(uod)
        printf("��");
    else
        printf("��");
}

void PrintColumns(int from, int to, int row)
{
    for(from; from <= to; from++){
        go(row, from);
        printf("��");
    }
}