#ifndef CALENDAR_UIPRINT_H
#define CALENDAR_UIPRINT_H

#define UP 1
#define DOWN 0

void go(int x, int y);
void color(int a);
//��ӡ�߿���, 1 �ϱ߿�0 �±߿�
void PrintRows(int from, int to, int column, bool uod);
//��ӡ�߿���, 1 ��߿� 0 �ұ߿�
void PrintColumns(int from, int to, int row);

int DefaultColor(void);
int Highlight(void);
int Today(void);
int Result(void);

#endif //CALENDAR_UIPRINT_H
