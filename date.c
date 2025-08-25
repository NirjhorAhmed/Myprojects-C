#include<stdio.h>
#include<math.h>

struct Date{
    int day;
    int month;
    int year;   
};
 int monthdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int leapyear(int year){
    return ((year%4==0 && year%100!=0)||(year%400==0));
}

int datetodays(struct Date d){
    int totaldays=d.year*365+(d.year/4- d.year/100 + d.year/400);

for(int i=1;i<d.month;i++){
    totaldays+=monthdays[i];
}
if (d.month >2 && leapyear(d.year)){
    totaldays++;
}
totaldays+=d.day;
return totaldays;
}
int datedifference(struct Date d1, struct Date d2){
    return datetodays(d2)-datetodays(d1);
}

int main(){
    struct Date d1,d2;
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
    printf("The difference between the two dates is %d days\n",abs(datedifference(d1,d2)));
    return 0;
}