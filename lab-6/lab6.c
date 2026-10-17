#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

void homework()
{
    int a, b;

    printf("Введите первое число: ");
    scanf("%d", &a);

    printf("Введите второе число: ");
    scanf("%d", &b);

    if (b == 0)
        printf("На ноль делить нельзя\n");
    else if (a % b == 0)
        printf("Да\n");
    else
        printf("Нет\n");
}

int main()
{
    setlocale(LC_ALL, "RUS");

    homework();

    return 0;
}