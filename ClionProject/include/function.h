#ifndef CALENDAR_FUNCTION_H
#define CALENDAR_FUNCTION_H

/*********************
 * ��ӡ����            *
 * *******************/
int dayNumber(int, int, int);
char *getMonthName(int);
int NumberOfDays(int, int);
int TimeZone(void);
void PrintTime(int x, int y, int tz, int longorshort);
void ReturnThisTime(int[]);
/*********************
 * �����ӣ�����ʱ      *
 * *******************/
void CountDown(void);
void StopWatch(void);

/*********************
 * ����ճ̣���ѯ�ճ�    *
 * �Ƽ��ճ�            *
 * *******************/
void AddSchedule(void);
void ShowSchedule(int yy, int mm, int dd);
void RecommendSchedule(int x, int y);

/*********************
 * ��������            *
 * *******************/
void SetAlarm(void);

/*********************
 * ����               *
 * *******************/
void Settings(void);
void LoadSettings(int[]);

int main(void);

#endif //CALENDAR_FUNCTION_H