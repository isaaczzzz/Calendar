#include "connection.h"

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//光标移动函数，X表示横坐标，Y表示纵坐标
void go(int x, int y)
{
    COORD coord;
    //坐标
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    //获得标准输出句柄
    SetConsoleCursorPosition(a, coord);
    //以标准输出的句柄为参数设置控制台光标坐标
}

//打印边框，行
void PrintRows(int from, int to, const int column, bool uod)
{
    go(from, column);
    if(uod)
        printf("┏");
    else
        printf("┗");

    for (++from; from <= to - 1; from++) {
        go(from, column);
        printf("━");
    }

    go(from, column);
    if(uod)
        printf("┓");
    else
        printf("┛");
}

//打印边框，列
void PrintColumns(int from, int to, int row)
{
    for(from; from <= to; from++){
        go(row, from);
        printf("┃");
    }
}