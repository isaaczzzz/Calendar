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

//今天日期的颜色
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

//查询日期的颜色
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
