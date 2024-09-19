#include <stdio.h>
int main (void)
{
    char kindDate, varC;
    int amount, size  = 0, total, varI, kilobytes, megabytes, bytes,remaining_bytes_kb, remaining_bytes_mb;
    short varS;
    double varD;

    scanf("%c", &kindDate);
    scanf("%d", &amount);

    if(kindDate == 'i'){
        size = sizeof(varI);
    } else if(kindDate == 'c'){
        size= sizeof(varC);
    } else if(kindDate == 'd'){
        size= sizeof(varD);
    } else if (kindDate == 's')
    {
        size = sizeof(varS);
    }

    total = size * amount;
    //bytes
    bytes = total;
    //kilobytes
    kilobytes = bytes / 1000 /100;
    remaining_bytes_kb = bytes % 1000;
    //megabytes
    megabytes = bytes /(1000 * 1000);
    remaining_bytes_mb = bytes % (1000 * 1000);


    if (megabytes > 0) {
        printf("%d MB and %d KB and %d B\n", megabytes, remaining_bytes_mb/1000, remaining_bytes_kb);
    } else if (kilobytes > 0) {
        printf("%d KB and %d B\n", kilobytes, remaining_bytes_kb);
    } else {
        printf("%d B\n", bytes);
    }
//printf("%d MB and %d KB and %d B\n", megabytes, kylobytes, megabytes);
//printf("%d KB and %d B\n", kylobytes, megabytes);
//printf("%d B\n", megabytes);

return 0;
}