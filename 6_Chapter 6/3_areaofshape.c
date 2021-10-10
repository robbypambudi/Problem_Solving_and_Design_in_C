#include <stdio.h>
#define PI 3.14

void banner()
{
    printf("(1) Area of a parallelogram\n");
    printf("(2) Area of a triangle\n");
    printf("(3) Area of a trapezoid\n");
    printf("(4) Area of a circle\n");
    printf("(5) QUIT\n");
}
void num_1()
{
    int a, t;
    printf("Masukan panjang : ");
    scanf("%d", &a);
    printf("Masukan tinggi : ");
    scanf("%d", &t);
    printf("Luas Area Adalah : %d\n", a * t);
}

void num_2()
{
    float a, t;
    printf("Masukan panjang : ");
    scanf("%f", &a);
    printf("Masukan tinggi : ");
    scanf("%f", &t);
    printf("Luas Area Adalah : %.0f\n", a * t / 2);
}
void num_3()
{
    float a, b, t;
    printf("Masukan sisi atas : ");
    scanf("%f", &a);
    printf("Masukan sisi bawah : ");
    scanf("%f", &b);
    printf("Masukan tinggi : ");
    scanf("%f", &t);
    printf("Luas Area Tersebut Adalah : %.0f\n", (a + b) / 2 * t);
}
void num_4()
{
    float r;
    printf("Jari - jari : ");
    scanf("%f", &r);
    printf("Luas Area Tersebut Adalah : %.0f\n", (r * r) * PI);
}

int main()
{
    int N = 1;
    while (N)
    {
        banner();
        printf("Enter the number of the problem you wish to solve ");
        scanf("%d", &N);

        if (N == 1)
            num_1();
        else if (N == 2)
            num_2();
        else if (N == 3)
            num_3();
        else if (N == 4)
            num_4();
        else if (N == 5)
            break;
    }
}