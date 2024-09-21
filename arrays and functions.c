#include <stdio.h>
int reversArray(int[]);
int main(void)
{

    int array[7];
    int index = 0;
    int finalArray[7];

    while (index < 6){
        scanf("%d", &array[index]);
        index ++;
    }
   // printf("%d",reversArray(array));
   reversArray(array);
 return 0;   
}

int reversArray(int array[])
{
    int reversArray[7];
    int index = 6;
    int y = 0;

    while(index >= 0){
    reversArray[y] = array[index];
       printf("%d ", reversArray[y]); 
    index --;
    y++;
    }
    return 0;
}