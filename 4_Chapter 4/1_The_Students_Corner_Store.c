/* 
The Students’ Corner Store in a university needs a program to implement its 
students’ discount policy. The program is to prompt the user to enter the pur-
chase total and to indicate whether the purchaser is a student. Students are 
eligible to receive a 20% discount on all their purchases. The discount cal-
culation, however, must be done before addition of the 5% sales tax. This is 
done to ensure that the discount is not applied to the sales tax. Here are two 
sample output files—one for a student purchaser and one for a nonstudent 
purchaser.
*/

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
