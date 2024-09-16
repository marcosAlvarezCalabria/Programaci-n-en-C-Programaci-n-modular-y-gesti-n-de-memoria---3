#include <stdio.h>
int min(int dig1, int dig2);
int main (void)
{
    int num_digit;
    int array[50];
    int index = 0;
    int res ;

    scanf("%d", &num_digit);
    while (index < num_digit)
    {
        scanf("%d", &array[index]);
        index++;
    }

    index = 0;
    res = array[0];

    while ( index < num_digit -1){
      res = min(res,array[index+1]);
      index++;
    }

    printf("%d", res);
    
return 0;
       
}

int min(int dig1 ,int dig2 ){

    if (dig1 > dig2){
        return dig2;
    } else {
        return dig1;
    }
}