/*********************
 * �����ճ̣���ѯ�ճ�   *
 * *******************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_LENGTH 205

struct Schedule
{
    int yy;
    int mm;
    int dd;
    char note[MAX_LENGTH];
    int impo;
} S;

void AddSchedule();
void ShowSchedule();

int main(void)
{
    system("chcp 936");
    system("cls");

    AddSchedule();
    ShowSchedule();
    return 0;
}

void AddSchedule()
{
    FILE *fp;
    fp = fopen("schedule.dat", "ab+");
    int i;

    system("cls");
    printf("������Ҫ���ӵ�����(��/��/��): ");
    scanf("%d%d%d", &S.yy, &S.mm, &S.dd);
    printf("�����ճ�����(������100��): ");
    fflush(stdin);
    scanf("%[^\n]", S.note);
    printf("���������޷���: (1:��Ҫ�ҽ���/2:��Ҫ������/3:����Ҫ������/4:����Ҫ������):_\b");
    scanf("%d", &S.impo);
    if (fwrite(&S, sizeof(S), 1, fp))
    {
        puts("�ճ̱���ɹ�");
        fclose(fp);
    }
    else
        puts("\a�ճ̱���ʧ��\a");
    printf("�������������............\n");
    getchar();
    getchar();
    fclose(fp);
}

void ShowSchedule()
{
    FILE *fp;
    int i = 0, isFound = 0;
    int yy, mm, dd;
    fp = fopen("schedule.dat", "rb");

    system("cls");
    printf("������Ҫ��ѯ������(��/��/��): ");
    scanf("%d%d%d", &yy, &mm, &dd);
    
    system("cls");
    if (fp == NULL) {
        printf("δ�ܳɹ����ļ�\n");
        return;
    }
    while (fread(&S, sizeof(S), 1, fp) == 1)
    {
        if (S.yy == yy && S.mm == mm && S.dd == dd)
        {
            printf("���յĵ� %d ���ճ���: %s\n", i + 1, S.note);
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
    printf("�������������............");
    getchar();
    getchar();
}