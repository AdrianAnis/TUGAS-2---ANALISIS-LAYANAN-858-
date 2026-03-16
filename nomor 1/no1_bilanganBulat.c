#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Masukkan Nilai A: ");
    scanf("%d", &a);
    printf("Masukkan Nilai B: ");
    scanf("%d", &b);
    printf("Masukkan Nilai C: ");
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Bukan segitiga\n");
    }
    else if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Bukan segitiga\n");
    }
    else if (a == b && b == c)
    {
        printf("Segitiga Sama Sisi\n");
    }
    else if (a == b || b == c || a == c)
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
    return 0;
}