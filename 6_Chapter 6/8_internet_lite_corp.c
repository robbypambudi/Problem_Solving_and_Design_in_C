// Author by Robby Ulung Pambudi

#include <stdio.h>
#include <math.h>
#define rate 7.99
#define charges 1.99

float hitung(float a)
{
    int temp;
    float harga;
    if (a <= 10)
    {
        return rate;
    }
    else
    {
        a = ceil(a);
        if ((int)a % 10 != 0)
        {
            temp = (int)a % 10;
        }
        else
        {
            temp = a / 10;
        }
        harga = rate + (float)(temp * charges);
        return (float)harga;
    }
}

float rata(float a, float time)
{
    return (a / time);
}

int main()
{
    int day, month, id[100], temp;
    float time[100], carge_hour[100], ave[100];
    char c;

    FILE *fp = fopen("usage.txt", "r");
    if (fp == NULL)
        printf("Nothing File\n");

    fscanf(fp, "%d %d\n", &day, &month);
    for (int i = 1; c != EOF; i++)
    {
        fscanf(fp, "%d %f", &id[i], &time[i]);

        carge_hour[i] = hitung(time[i]);
        ave[i] = rata(carge_hour[i], time[i]);
        //printf("%f\n", ave);
        c = getc(fp);
        temp = i;
    }
    fclose(fp);
    fp = fopen("charges.txt", "w");
    if (fp == NULL)
        printf("error\n");
    fprintf(fp, "Charges for %d/%d\n\n\n", day, month);
    fprintf(fp, "Customer\t hrs used\t C.P.H.\t\t Ave. Cost\n\n");
    printf("Charges for %d/%d\n\n\n", day, month);
    printf("Customer\t hrs used\t C.P.H.\t\t Ave. Cost\n\n");
    for (int j = 1; j <= temp; j++)
    {

        fprintf(fp, "%d\t\t %0.1lf\t\t %0.2lf\t\t %0.2lf\n", id[j], time[j], carge_hour[j], ave[j]);
        printf("%d\t\t %0.1lf\t\t %0.2lf\t\t %0.2lf\n", id[j], time[j], carge_hour[j], ave[j]);
    }
    fclose(fp);
    return 0;
}
