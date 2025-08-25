#include<stdio.h>
#include<stdlib.h>
struct car{
    int carID;
    char model[50];
    int rentalrate;
};

int main(){
    int n,numbers=1;
    printf("Enter the number of cars: ");
    scanf("%d", &n);
    struct car *cars;
    cars =(struct car*)malloc(n*sizeof(struct car));
    for(int i=0;i<n;i++){
        printf("Enter the car ID, model and rental rate of %dth car: ",numbers++);
        scanf("%d",&cars[i].carID);
        scanf("%s",&cars[i].model);
        scanf("%d",&cars[i].rentalrate);
    }
    for(int i=0;i<n;i++){
        printf("Car ID: %d\n",cars[i].carID);
        printf("Model: %s\n",cars[i].model);
        printf("Rental Rate: %d\n",cars[i].rentalrate);
        printf("-------------------------------\n");
    }
    int days;
    printf("Enter the number of days: ");
    scanf("%d",&days);
    int totalrental=0;
    for(int i=0;i<n;i++){
        totalrental += cars[i].rentalrate * days;
    }
    printf("Total rental cost: %d$",totalrental);
    return 0;
    free(cars);
}