/*
Write a program that reports the contents of a compressed-gas cylinder based 
on the first letter of the cylinder’s color. The program input is a character rep-
resenting the observed color of the cylinder: “Y” or “y” for yellow, “O” or “o” 
for orange, and so on. Cylinder colors and associated contents are as follows:
orange ammonia
brown carbon monoxide
yellow hydrogen
green oxygen Your program should respond to input of a letter other than the first letters of 
the given colors with the message, Contents unknown
*/
#include <stdio.h>

int main (){
    char N;

    scanf("%c", &N);

    if (N == 'Y' || N == 'y'){
        printf("hydrogen\n");
    }
    else if ( N == 'O' || N == 'o'){
        printf("ammonia\n");
    }
    else if ( N == 'B' || N == 'b'){
        printf("carbon monoxide\n");
    }
    else if (N == 'G' || N == 'g'){
        printf("oxygen\n");
    }
    else {
        printf("Contents unknown\n");
    }
}