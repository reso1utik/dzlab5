#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>   
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");

    double x = 0.0, y = 0.0;
    double d = 1.0; 
    double result = 0.0;

    printf("Введите значения x и y: ");

    scanf("%lf %lf", &x, &y);

    double ch = pow(cos(y), 2) + 2.4 * d;
    double zn = exp(y) + log(pow(sin(x), 2) + 6);
    result = ch / zn;

    printf("Результат вычисления: %lf\n", result);

    return 0;
}
