#include  <stdio.h>
int multiplication_number(int digit);

int main (void)
{
int digit;
int multiplication ;
scanf("%d", &digit);
multiplication = multiplication_number(digit);

return 0;
}

int multiplication_number(int digit)
{
    if (digit < 0){
        return 0;
    }

    return (digit % 10) * multiplication_number(digit/10);
}