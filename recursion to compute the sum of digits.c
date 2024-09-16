#include <stdio.h>
int sumOfDigits(int digit);

int main(void)
{
    int digit;
    int sum;
    scanf("%d", &digit);

    if (digit < 0) {
        digit = -digit;  // Convertir a positivo si es negativo
    }

    sum = sumOfDigits(digit);
    printf("%d", sum);
    return 0;
}

int sumOfDigits(int digit)
{
if (digit == 0){
    return 0;
}   
   return (digit % 10) + sumOfDigits (digit / 10) ;
}