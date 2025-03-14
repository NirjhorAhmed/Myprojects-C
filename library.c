#include<stdio.h>
struct library{
    char book[50];
    char author[20];
    int price;
}b1,b2,b3;

int main()
{   
    printf("Enter the 1st book details: ");
    scanf("%s %s %d",&b1.book,&b1.author,&b1.price);
    printf("Enter the 2nd book details: ");
    scanf("%s %s %d",&b2.book,&b2.author,&b2.price);
    printf("Enter the 3rd book details: ");
    scanf("%s %s %d",&b3.book,&b3.author,&b3.price);   
    struct library mostexpensive;
    if(b1.price>b2.price && b1.price>b3.price){
        mostexpensive=b1;
    }
    else if(b2.price>b1.price && b2.price>b3.price){
        mostexpensive=b2;
    }
    else{
        mostexpensive=b3;
    }
    printf("The most expensive book is: %s by %s at %d",mostexpensive.book,mostexpensive.author,mostexpensive.price);
    struct library leastexpensive;
    if(b1.price<b2.price && b1.price<b3.price){
        leastexpensive=b1;
    }
    else if(b2.price<b1.price && b2.price<b3.price){
        leastexpensive=b2;
    }
    else{
        leastexpensive=b3;
    }
    printf("\nThe least expensive book is: %s by %s at %d",leastexpensive.book,leastexpensive.author,leastexpensive.price);
    return 0;
}