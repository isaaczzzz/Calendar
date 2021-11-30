#ifndef CALENDAR_UIPRINT_H
#define CALENDAR_UIPRINT_H

#define UP 1
#define DOWN 0

void go(int x, int y);
void color(int a);
//´òÓ¡±ß¿òÐÐ, 1 ÉÏ±ß¿ò£¬0 ÏÂ±ß¿ò
void PrintRows(int from, int to, int column, bool uod);
//´òÓ¡±ß¿òÁÐ, 1 ×ó±ß¿ò 0 ÓÒ±ß¿ò
void PrintColumns(int from, int to, int row);

int DefaultColor(void);
int Highlight(void);
int Today(void);
int Result(void);

#endif //CALENDAR_UIPRINT_H
