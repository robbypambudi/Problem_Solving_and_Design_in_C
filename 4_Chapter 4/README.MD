# Chapter 4
## Selection Structures: if and switch Statements.
### Soal No 1

The Students’ Corner Store in a university needs a program to implement its 
students’ discount policy. The program is to prompt the user to enter the pur-
chase total and to indicate whether the purchaser is a student. Students are 
eligible to receive a 20% discount on all their purchases. The discount cal-
culation, however, must be done before addition of the 5% sales tax. This is 
done to ensure that the discount is not applied to the sales tax. Here are two 
sample output files—one for a student purchaser and one for a nonstudent 
purchaser.
###Code :
```
#include <stdio.h>

int main (){
    float student, nonstudent;

    printf("Total purchases for student \t\t\t$");
    scanf("%f", &student);

    // For Stuent 
    printf("Student's discount (20%%)\t\t\t$%.2f\n", student*20/100);
    float total_discount_stdt = student*80/100;
    printf("Discounted total\t\t\t\t$%.2f\n", total_discount_stdt);
    printf("Sales tax (5%%)\t\t\t\t\t$%.2f\n",total_discount_stdt*5/100);
    printf("Total\t\t\t\t\t\t$%.2f\n", total_discount_stdt*105/100);

    printf("______________________________________\n");
    printf("Total purchases for nonstudent \t\t\t$");
    scanf("%f", &nonstudent);
    printf("Sales tax (5%%)\t\t\t\t\t$%.2f\n",nonstudent*5/100);
    printf("Total\t\t\t\t\t\t$%.2f\n", nonstudent*105/100);

}
```

### Soal No 2

Write a program that calculates the users body mass index (BMI) and catego-
rizes it as underweight, normal, overweight, or obese, based on the following 
table from the United States Centers for Disease Control
```
Mi    Weight      Status
Below   18.5       Underweight
18.5    24.9       Normal
25.0    29.9       Overweight
30.0 and    above  Obese
```

 To calculate BMI based on weight in pounds (wt_lb) and height in inches 
(ht_in), use this formula (rounded to tenths):
### Code :
```
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

```
### Soal No 3

Review the “C in Focus” article entitled “The UNIX Connection” on 221–222 Then write a C program that demonstrates C’s short-circuit evaluation of the && and || operators.  Include two user-defined functions, fun1 and fun2. Function fun1 should prompt the user to enter “T” for true or “F” for false.  If the user input is “T,” fun1 should return 1; otherwise it should return 0. ...


```
#include <stdio.h>

int fun_1 (char x){
    if (x == 'T'){
        return 1;
    } else {
        return 0;
    }
}

int fun_2 (){
    printf("fun2 executede\n");
    return 1;
}

int fun_main(int x, int y){
    printf("Testing &&\n");
    if ((x && y) == 1){
        printf("Test of && complete\n");
    }
    printf("Testing ||\n");
    if ((x || y) == 1){
        printf("Test of || complete\n");
    }
}

int main (){
    char fun1;
    char fun2;

    // Function 1
    printf("Input function fun1 (T/F) \t:");
    scanf("%c", &fun1);
    printf("Input function fun2 (T/F) \t:");
    scanf("%c\n", &fun2);  
    
    int x = fun_1(fun1);
    int y = fun_2();
    fun_main(x, y);

}

```

### Soal No 4

Write a program that reports the contents of a compressed-gas cylinder based 
on the first letter of the cylinder’s color. The program input is a character rep-
resenting the observed color of the cylinder: “Y” or “y” for yellow, “O” or “o” 
for orange, and so on. Cylinder colors and associated contents are as follows:
```
orange    ammonia
brown     carbon monoxide
yellow    hydrogen
green     oxygen
```
Your program should respond to input of a letter other than the first letters of 
the given colors with the message, Contents unknown.
### Code :
```
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
```

### Soal No 5

An Internet Service Provider charges its subscribers every month based on the 
information provided in the following table:
```
Data Usage (n), Gbs     Charges
 0 < n <= 1              250
 ...
 
```
 Given the amount of data used by the subscriber (i.e. n), write a program to 
calculate the cha

### Code 
```
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
```

### Soal No 6
Write a program that takes the x–y coordinates of a point in the Cartesian 
plane and prints a message telling either an axis on which the point lies or the 
quadrant in which it is found.
### Code

```
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
```

### Soal No 7
Write a program that determines the day number (1 to 366) in a year for a 
date that is provided as input data. As an example, January 1, 1994, is day 1. 
December 31, 1993, is day 365. December 31, 1996, is day 366, since 1996 is 
a leap year. A year is a leap year if it is divisible by four, except that any year 
divisible by 100 is a leap year only if it is divisible by 400. Your program should 
accept the month, day, and year as integers. Include a function leap that 
returns 1 if called with a leap year, 0 otherwise.
### Code
```
#include <stdio.h>

int main (){
    int day, month, year;

    printf("Input Day/Month/Year as Integer (12 04 2003): ");
    scanf("%d %d %d", &day, &month, &year);


    // Detection leap year
    int leap_year;
    if (year%4== 0 && ((year%100!=0) || (year %400==0))){
        leap_year = 1;
    }
    else {
        leap_year = 0;
    }
    int count_day;

    // Calculate Day
    switch (month) {
        case 1 :  count_day = day; break;
        case 2 :  count_day = 31  + day + leap_year; break;
        case 3 :  count_day = 59  + day + leap_year; break;
        case 4 :  count_day = 90  + day + leap_year; break;  
        case 5 :  count_day = 120 + day + leap_year; break;  
        case 6 :  count_day = 151 + day + leap_year; break; 
        case 7 :  count_day = 181 + day + leap_year; break;  
        case 8 :  count_day = 212 + day + leap_year; break;   
        case 9 :  count_day = 243 + day + leap_year; break;  
        case 10 : count_day = 273 + day + leap_year; break;  
        case 11 : count_day = 304 + day + leap_year; break;  
        case 12 : count_day = 334 + day + leap_year; break;
        default: break;
    }
    // Print Output
    printf("%d\n", count_day);

}
```
### Soal No 8
Write a program that interacts with the user like this:
```
(1) First Free Service
(2) Second Free Service
Enter the Free Service number>> 2
Enter number of Miles>> 3557
Vehicle must be serviced.
```
### Code 
```
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
```
### Soal No 9
Chatflow Wireless offers customers 600 weekday minutes for a flat rate of 
39.99. Night (8 p.m. to 7 a.m.) and weekend minutes are free, but additional 
weekday minutes cost 0.40 each. There are taxes of 5.25% on all charges. 
Write a program that prompts the user to enter the number of weekday 
minutes, night minutes, and weekend minutes used, and calculates the 
monthly bill and average cost of a minute before taxes. The program should 
display with labels all the input data, the pretax bill and average minute 
cost, the taxes, and the total bill. Store all monetary values as whole cents 
(rounding the taxes and average minute cost), and divide by 100 for display 
of results
### Code 

```

```
