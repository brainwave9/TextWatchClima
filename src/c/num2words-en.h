#pragma once
#include "string.h"
void time_to_3words_EN(int hours, int minutes,int *LineBold, char *line1, char *line2, char *line3);
void PopatInit_EN(int minute, int *lenatinit);
void WriteDate_EN(int WD, int Mnth, int Dy, char *iterweekday, char *iterdate, char *itermonth );
void Animations_EN(int Minute, int *LenBefore, int *LenNow, int *LenAfter);
extern const char* const MONTHS_EN[];
extern const char* const DAYS_EN[];
extern const char* const WEEKDAY_EN[];
