#ifndef CALENDAR_FUNCTION_H
#define CALENDAR_FUNCTION_H

/*********************
 * 打印日历            *
 * *******************/
int dayNumber(int, int, int);
char *getMonthName(int);
int NumberOfDays(int, int);
int TimeZone(void);
void PrintTime(int x, int y, int tz, int longorshort);
void ReturnThisTime(int[]);
/*********************
 * 番茄钟，正计时      *
 * *******************/
void CountDown(void);
void StopWatch(void);

/*********************
 * 添加日程，查询日程   *
 * *******************/
void AddSchedule(void);
void ShowSchedule(int yy, int mm, int dd);

/*********************
 * 设置闹钟               *
 * *******************/
void SetAlarm(void);

/*********************
 * 设置               *
 * *******************/
void Settings(void);
void LoadSettings(int[]);

int main(void);

#endif //CALENDAR_FUNCTION_H