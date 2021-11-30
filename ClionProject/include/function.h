#ifndef CALENDAR_FUNCTION_H
#define CALENDAR_FUNCTION_H

/*********************
 * ��ӡ����            *
 * *******************/
int dayNumber(int, int, int);
char *getMonthName(int);
int numberOfDays(int, int);

/*********************
 * �����ӣ�����ʱ      *
 * *******************/
void CountDown(void);
void StopWatch(void);

/*********************
 * ����ճ̣���ѯ�ճ�   *
 * *******************/
void AddSchedule(void);
void ShowSchedule(int yy, int mm, int dd);

void SetAlarm(void);

void Settings(void);

int main(void);

#endif //CALENDAR_FUNCTION_H