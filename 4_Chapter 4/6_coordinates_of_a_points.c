/*
Write a program that takes the x–y coordinates of a point in the Cartesian 
plane and prints a message telling either an axis on which the point lies or the 
quadrant in which it is found

Sample lines of output:
(-1.0, -2.5) is in quadrant III
(0.0, 4.8) is on the y-axis
*/

#include <stdio.h>

int main (){
    float X, Y;
    scanf("%f %f", &X, &Y);

    printf("(%.1f , %.1f) ", X , Y);

    if (X == 0 && Y == 0){
        printf(" 0 \n");
    }
    else if (X == 0){
        printf("is on the x-axis\n");
    }
    else if (Y == 0){
        printf("is on the y-axis\n");
    }
    else if (X > 0 && Y > 0){
        printf("is in quadrant I\n");
    }
    else if (X < 0 && Y > 0){
        printf("is in quadrant II\n");
    }
    else if (X < 0 && Y < 0){
        printf("is in quadrant III\n");
    }
    else if (X > 0 && Y < 0){
        printf("is in quadrant IV\n");
    }
    else {
        printf("I dont know\n");
    }

    return 0;
}