#include <stdio.h>

int main()
{
    float a, b, c;
    float diff_ab, diff_bc, diff_ac;

    printf("Masukkan Nilai A: ");
    scanf("%f", &a);
    printf("Masukkan Nilai B: ");
    scanf("%f", &b);
    printf("Masukkan Nilai C: ");
    scanf("%f", &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Bukan segitiga\n");
    }
    else if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Bukan segitiga\n");
    }
    else
    {
        diff_ab = a - b;
        if (diff_ab < 0)
        {
            diff_ab = -diff_ab;
        }

        diff_bc = b - c;
        if (diff_bc < 0)
        {
            diff_bc = -diff_bc;
        }

        diff_ac = a - c;
        if (diff_ac < 0)
        {
            diff_ac = -diff_ac;
        }

        if (diff_ab <= 0.01 * a && diff_bc <= 0.01 * b && diff_ac <= 0.01 * a)
        {
            printf("Segitiga Sama Sisi\n");
        }
        else if (diff_ab <= 0.01 * a || diff_bc <= 0.01 * b || diff_ac <= 0.01 * a)
        {
            printf("Segitiga Sama Kaki\n");
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            printf("Segitiga Siku-Siku\n");
        }
        else
        {
            printf("Segitiga Bebas\n");
        }
    }

    return 0;
}