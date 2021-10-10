/*
Write a program that counts the number of odd digits and even digits in an integer.
The user should enter the desired integer and the program counts the number of odd
digits and even digits in that integer. Write a function that determines the number
of odd digits and even digits and displays the same to the user.
*/

#include <stdio.h>

int main (){
    int N;
    while (scanf("%d",&N) != EOF){

        if (N%2 == 0){
            printf("Jumlah Bilangan Ganjil Sebanyak : %d\n", N/2);
            printf("Jumlah Bilangan Genap Sebanyak  : %d\n", N/2);
        }
        else {
            printf("Jumlah Bilangan Ganjil Sebanyak : %d\n", N/2+1);
            printf("Jumlah Bilangan Genap Sebanyak  : %d\n", N/2 );
        }
    }
}