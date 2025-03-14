#include<stdio.h>

struct{
    int hours;
    int minutes;
    int seconds;
}s1,s2;

int main()
{
    printf("Enter the first time: ");
    scanf("%d %d %d",&s1.hours,&s1.minutes,&s1.seconds);
    printf("Enter the second time: ");
    scanf("%d %d %d",&s2.hours,&s2.minutes,&s2.seconds);
    int totaltime=(s1.seconds+s2.seconds)+((s1.minutes+s2.minutes)*60)+((s1.hours+s2.hours)*3600);
    int hours=totaltime/3600;
    int minutes=(totaltime%3600)/60;
    int seconds=(totaltime%60);
    printf("The total time is: %d:%d:%d",hours,minutes,seconds);
    return 0;
}