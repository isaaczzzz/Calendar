#include "connection.h"

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//����ƶ�������X��ʾ�����꣬Y��ʾ������
void go(int x, int y)
{
    COORD coord;
    //����
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    //��ñ�׼������
    SetConsoleCursorPosition(a, coord);
    //�Ա�׼����ľ��Ϊ�������ÿ���̨�������
}

//��ӡ�߿���
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

//��ӡ�߿���
void PrintColumns(int from, int to, int row)
{
    for(from; from <= to; from++){
        go(row, from);
        printf("��");
    }
}

int DefaultColor()
{
    int settings[7];
    LoadSettings(settings);
    switch (settings[3]) {
        case 1://RED
            return RED;
        case 2://GREEN
            return GREEN;
        case 3://BLUE
            return BLUE;
        case 4://YELLOW
            return YELLOW;
        case 5://PURPLE
            return PURPLE;
        case 6://GREY
            return GREY;
        case 7://DEEPBLUE
            return DEEPBLUE;
        case 8://BLACK
            return BLACK;
    }
}

int Highlight()
{
    int settings[7];
    LoadSettings(settings);
    switch (settings[4]) {
        case -1://RED
            return BACKRED;
        case -2://GREEN
            return BACKGREEN;
        case -3://BLUE
            return BACKBLUE;
        case -4://YELLOW
            return BACKYELLOW;
        case -5://PURPLE
            return BACKPURPLE;
        case -6://GREY
            return BACKGREY;
        case -7://DEEPBLUE
            return BACKDEEPBLUE;
        case -8://BLACK
            return BACKBLACK;
    }
}

//�������ڵ���ɫ
int Today()
{
    int settings[7];
    LoadSettings(settings);
    switch (settings[5]) {
        case 1://RED
            return RED;
        case 2://GREEN
            return GREEN;
        case 3://BLUE
            return BLUE;
        case 4://YELLOW
            return YELLOW;
        case 5://PURPLE
            return PURPLE;
        case 6://GREY
            return GREY;
        case 7://DEEPBLUE
            return DEEPBLUE;
        case 8://BLACK
            return BLACK;
    }
}

//��ѯ���ڵ���ɫ
int Result()
{
    int settings[7];
    LoadSettings(settings);
    switch (settings[6]) {
        case 1://RED
            return RED;
        case 2://GREEN
            return GREEN;
        case 3://BLUE
            return BLUE;
        case 4://YELLOW
            return YELLOW;
        case 5://PURPLE
            return PURPLE;
        case 6://GREY
            return GREY;
        case 7://DEEPBLUE
            return DEEPBLUE;
        case 8://BLACK
            return BLACK;
    }
}
