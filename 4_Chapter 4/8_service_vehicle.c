/*
Write a program that interacts with the user like this:
(1) First Free Service
(2) Second Free Service

Enter the Free Service number>> 2
Enter number of Miles>> 3557
Vehicle must be serviced.

Use the table below to determine the appropriate message.
Free Services               Miles (k)
First Service               1500 < k <= 3000
Second Service              3001 < k <= 4500
*/

#include <stdio.h>

int main (){
    
    int free_service_number;
    int number_of_service;

    printf("(1) First Free Service\n");
    printf("(2) Second Free Service\n");
    printf("Enter the Free Service number>> ");
    scanf("%d",&free_service_number);
    printf("Enter number of Miles>> ");
    scanf("%d", &number_of_service);
    
    if (free_service_number == 1){
        if (number_of_service > 1500 && number_of_service <= 3000){
            printf("Vehicle must be serviced.\n");
        }
        else{
            printf("Vehicle not be serviced\n");
        }
    } else if (free_service_number == 2){
        if (number_of_service > 3001 && number_of_service <= 4500){
            printf("Vehicle must be serviced.\n");
        }
        else{
            printf("Vehicle not be serviced\n");
        }
        
    }



}