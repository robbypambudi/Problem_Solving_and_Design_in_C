#include <stdio.h>
#include <math.h>

void banner()
{
    printf("INTRAVENOUS RATE ASSISTANT\n\n");
    printf("Enter the number of the problem you wish to solve.\n");
    printf("     GIVEN A MEDICAL ORDER IN         \t\t CALCULATE RATE IN\n");
    printf("(1)  ml/hr & tubing drop factor       \t\t drops / min\n");
    printf("(2)  1 L for n hr                     \t\t ml / hr\n");
    printf("(3)  mg/kg/hr & concentration in mg   \t\t ml / hr\n");
    printf("(4)  units/hr & concentration in units/ml\t ml / hr\n");
    printf("(5)  QUIT                                \t ml / hr\n\n");
}
void num_1()
{
    float rate, tubings;
    printf("Enter rate in ml/hr=> ");
    scanf("%f", &rate);
    printf("Enter tubing's drop factor(drops/ml)=> ");
    scanf("%f", &tubings);
    printf("The drop rate per minute is %.0f\n", ceil(rate * tubings / 60));
}

void num_2()
{
    float num;
    printf("Enter number of hours=> ");
    scanf("%f", &num);
    printf("The rate in milliliters per hour is %.0f.\n", ceil(1000 / num));
}
void num_3()
{
    float get_rate, get_weight, get_concentration;
    printf("Enter rate in mg/kg/hr=> ");
    scanf("%f", &get_rate);
    printf("Enter patient weight in kg=> ");
    scanf("%f", &get_weight);
    printf("Enter concentration in mg/ml=> ");
    scanf("%f", &get_concentration);
    printf("The rate in milliliters per hour is %.0f.\n", ceil(get_rate * get_weight * get_concentration));
}
void num_4()
{
    float rate, concentration;
    printf("Enter rate in units/hr=> ");
    scanf("%f", &rate);
    printf("Enter concentration in units/ml=> ");
    scanf("%f", &concentration);
    printf("The rate in milliliters per hour is %.0f.\n", ceil(rate / concentration));
}
int main()
{
    int get_problem = 1;
    while (get_problem >= 1)
    {
        banner();
        printf("Problem> ");
        scanf("%d", &get_problem);
        if (get_problem == 5)
            break;
        else if (get_problem == 1)
            num_1();
        else if (get_problem == 2)
            num_2();
        else if (get_problem == 3)
            num_3();
        else if (get_problem == 4)
            num_4();
        else
        {
            continue;
        }
    }
    return 0;
}
