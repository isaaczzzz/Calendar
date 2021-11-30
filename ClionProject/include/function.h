#ifndef CALENDAR_FUNCTION_H
#define CALENDAR_FUNCTION_H

/*********************
 * 打印日历            *
 * *******************/
int dayNumber(int, int, int);
char *getMonthName(int);
int numberOfDays(int, int);

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

void SetAlarm(void);

void Settings(void);

int main(void);

#endif //CALENDAR_FUNCTION_H