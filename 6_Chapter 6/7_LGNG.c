#include <stdio.h>

double square_root(double N, double initialGuess)
{

    double NG, LG = initialGuess, diff;
    while (1)
    {
        NG = 0.5 * (LG + N / LG);
        diff = NG - LG;

        if (diff < 0)
            diff = -diff;

        if (diff < 0.005)
            break;

        else
        {
            LG = NG;
        }
    }
    return NG; // 5
}

int main()
{
    double ans, n, initialguess = 1.0;

    while (scanf("%lf", &n) != EOF) //
    {
        printf("Enter a number: ");
        ans = square_root(n, initialguess); // 5
        printf("Hasil Root dari %lf = %lf \n", n, ans);
    }
    return 0;
}
