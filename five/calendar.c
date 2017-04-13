#include <stdio.h>


static char daytab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day_of_year_array: set day of year from month * day. Array Version */
int day_of_year_array(int year, int month, int day)
{
  int i, leap;

  leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
  for (i = 1; i < month; i++)
    day += daytab[leap][i];
  return day;
}

/* Pointer Version */
int *day_of_year(int year, int month, int day)
{
  int i, leap,
  char *p;

  leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
  p = &daytab[leap][i];

  for (i = 1; i < month; i++)
    day += *p;
    ++p;

  return day;
}

/* month_day_array: set month, day from day of year. Array Version. */
void month_day_array(int year, int yearday, int *pmonth, int *pday)
{
  int i, leap;

  leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
  for (i = 1; yearday > daytab[leap][i]; i++)
    yearday -= daytab[leap][i];
  *pmonth = i;
  *pday = yearday;
}

/* Pointer Version. */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
  int i, leap;
  int *p;

  leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
  p = &daytab[leap][i];

  for (i = 1; yearday > *p; i++) {
    yearday -= *p;
    ++p;
  }
  *pmonth = i;
  *pday = yearday;
}


/* month_name: return name of the n-th month. */
char *month_name(int n)
{
  static char *name[] = {
    "Illegal Month",
    "January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"
  };
  return (n < 1 || n > 12) ? name[0] : name[];
}
