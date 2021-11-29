#ifndef CALENDAR_UIPRINT_H
#define CALENDAR_UIPRINT_H

#define UP 1
#define DOWN 0

void go(int x, int y);
void color(int a);
//打印边框行, 1 上边框，0 下边框
void PrintRows(int from, int to, int column, bool uod);
//打印边框列, 1 左边框 0 右边框
void PrintColumns(int from, int to, int row);

#endif //CALENDAR_UIPRINT_H
