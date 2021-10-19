#include <stdio.h>

void hitung(int bilangan, int *ganjil, int *genap)
{
    int digit;
    while (bilangan > 0)
    {
        digit = bilangan % 10;
        if (digit % 2 == 0)
        {
            *genap++;
        }
        else
        {
            *ganjil++;
        }
        bilangan /= 10;
    }
}

int main()
{

    int N;
    int *genap = 0;
    int *ganjil = 0;

    scanf("%d", &N);
    hitung(N, &ganjil, &genap);

    printf("Ganjil %d Genap %d\n", ganjil, genap);
}