/*
Review the “C in Focus” article entitled “The UNIX Connection” on 221–222.  
Then write a C program that demonstrates C’s short-circuit evaluation of the 
&& and || operators.  Include two user-defined functions, fun1 and fun2.  
Function fun1 should prompt the user to enter “T” for true or “F” for false.  
If the user input is “T,” fun1 should return 1; otherwise it should return 0.  
Function fun2 should simply display “fun2 executed” and then return 1. 
Function main should include two conditional statements: one that displays 
“Test of && complete” if the && of function calls to fun1 and fun2 is true.  
The second conditional statement should display “Test of || complete” if 
the || of function calls to fun1 and fun2 is true (of course, this display will 
occur on every run since fun2 always returns 1). Before the first conditional 
statement, display “Testing &&,” and before the second, “Testing ||.”  
Then test your program four times with inputs of T T, T F, F T, and F F.  
Predict the output of each run before running it to verify your understanding 
of the short-circuit evaluation of these two operators
*/

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
