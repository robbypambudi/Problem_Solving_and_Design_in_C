/*
An Internet Service Provider charges its subscribers every month based on the 
information provided in the following table:

Data Usage (n), Gbs Charges
 0 < n <= 1         250
 ...
 Given the amount of data used by the subscriber (i.e. n), write a program to 
calculate the cha
*/

#include <stdio.h>

int main (){
    float N;
    printf("Data Usage (n), Gbs\t :");
    scanf("%f", &N);

    printf("Charges is :\t");

    if (N > 0 && N <= 1.0){
        printf("250\n");
    }
    else if (N > 1.0 && N <= 2.0){
        printf("500\n");
    }
    else if (N > 2.0 && N <= 5.0){
        printf("1000\n");
    }
    else if (N > 5.0 && N <= 10.0){
        printf("1500\n");
    }
    else {
        printf("2000\n");
    }


}