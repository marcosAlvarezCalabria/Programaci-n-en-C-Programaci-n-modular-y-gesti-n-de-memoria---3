#include <stdio.h>
void degreesCelsiusToDegreesFahrenheit(double value);
void metersToFeets(double value);
void gramsToPounds(double value);

int main(void)
{
    int num_conversions = 0;
    int i = 0;
    double value = 0.0;
    char unit ;

    scanf("%d", &num_conversions);

    while (i < num_conversions){

        scanf("%lf %c", &value, &unit);

        if(unit == 'm'){
            metersToFeets(value);
        } else if (unit == 'g'){
            gramsToPounds(value);
        } else if (unit == 'c'){
            degreesCelsiusToDegreesFahrenheit(value);
        }


        i++;
    }
    return 0;
}


void metersToFeets(double value){
    double feet = 3.2808;
    double res = feet * value;
    printf("%lf ft\n", res);
}
void gramsToPounds(double value){
    double pounds = 0.002205;
    double res = pounds * value;
    printf("%lf lbs\n", res);
}
void degreesCelsiusToDegreesFahrenheit(double value){
    double degreesFahrenheit = 32 + 1.8 * value;
    printf("%lf f\n", degreesFahrenheit);
}