/*
Write a program that determines the day number (1 to 366) in a year for a 
date that is provided as input data. As an example, January 1, 1994, is day 1. 
December 31, 1993, is day 365. December 31, 1996, is day 366, since 1996 is 
a leap year. A year is a leap year if it is divisible by four, except that any year 
divisible by 100 is a leap year only if it is divisible by 400. Your program should 
accept the month, day, and year as integers. Include a function leap that 
returns 1 if called with a leap year, 0 otherwise.
*/

#include <stdio.h>

int main (){
    int day, month, year;

    printf("Input Day/Month/Year as Integer (12 04 2003): ");
    scanf("%d %d %d", &day, &month, &year);


    // Detection leap year
    int leap_year;
    if (year%4== 0 && ((year%100!=0) || (year %400==0))){
        leap_year = 1;
    }
    else {
        leap_year = 0;
    }
    int count_day;

    // Calculate Day
    switch (month) {
        case 1 :  count_day = day; break;
        case 2 :  count_day = 31  + day + leap_year; break;
        case 3 :  count_day = 59  + day + leap_year; break;
        case 4 :  count_day = 90  + day + leap_year; break;  
        case 5 :  count_day = 120 + day + leap_year; break;  
        case 6 :  count_day = 151 + day + leap_year; break; 
        case 7 :  count_day = 181 + day + leap_year; break;  
        case 8 :  count_day = 212 + day + leap_year; break;   
        case 9 :  count_day = 243 + day + leap_year; break;  
        case 10 : count_day = 273 + day + leap_year; break;  
        case 11 : count_day = 304 + day + leap_year; break;  
        case 12 : count_day = 334 + day + leap_year; break;
        default: break;
    }
    // Print Output
    printf("%d\n", count_day);

}