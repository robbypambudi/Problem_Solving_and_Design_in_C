#include <stdio.h>

void banner()
{
    printf("Select the form that you would like to convert to slope-intercept form: \n");
    printf("(1) Two-point form (you know two points on the line\n");
    printf("(2) Point-slope form (you know the line's slope and one point) \n");
}
void num_1()
{
    float x[2][2];
    printf("Enter the x-y coordinates of the first point separated by a space=> ");
    scanf("%f %f", &x[0][0], &x[0][1]);
    printf("Enter the x-y coordinates of the second point separated by a space=> ");
    scanf("%f %f", &x[1][0], &x[1][1]);
    printf("\n\nTwo-point form\n");
    printf("    (%.2f - %.2f)\n", x[1][1], x[0][1]);
    printf("m = --------------\n");
    printf("    (%.2f - %.2f)\n", x[1][0], x[0][0]);
    printf("Slope-intercept form\n");
    printf("y = ");
}

void num_2()
{
    printf("Cek\n");
}

int main()
{
    int N = 1;
    while (N)
    {
        banner();
        printf("=> ");
        scanf("%d", &N);
        if (N == 1)
            num_1();
        else if (N == 2)
        {
            num_2();
        }
        else
        {
            continue;
        }
    }
}