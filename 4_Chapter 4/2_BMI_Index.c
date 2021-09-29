/*
Write a program that calculates the users body mass index (BMI) and catego-
rizes it as underweight, normal, overweight, or obese, based on the following 
table from the United States Centers for Disease Control

Mi Weight Status
Below 18.5 Underweight
18.5       24.9 Normal
25.0      29.9 Overweight
30.0 and    above Obese
 To calculate BMI based on weight in pounds (wt_lb) and height in inches 
(ht_in), use this formula (rounded to tenths):
...
*/

#include <stdio.h>

int main (){

    // Variable
   float wt_lb, ht_in;

    // Input 
    printf("Weight in pounds\t");
    scanf("%f", &wt_lb);
    printf("Height in inches\t");
    scanf("%f", &ht_in);

    // Calculated
    float BMI = (703 * wt_lb)/(ht_in*ht_in);

    printf("BMI Status : \t\t");
    if (BMI < 18.5){
        printf("Underweight\n");
    }
    else if (BMI >= 18.5 && BMI <= 24.9){
        printf("Normal\n");
    }
    else if (BMI >= 25.0 && BMI <= 29.9){
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }

}
