#include <stdio.h>
int main()
{
    float km, m, feet, inch, cm;
    printf("Enter the distance between two cities(in km): ");
    scanf("%f", &km);
    m = km * 1000;       //since 1km = 1000m
    feet = km * 3280.84; //since 1km=3280.84feet
    inch = km * 39370.1; //since 1 km=39370.1inches
    cm = km * 100000;    //since 1km = 100000cm
    printf("\nDistance in kilometres = %5.2f ", km);
    printf("\nDistance in metres = %5.2f ", m);
    printf("\nDistance in feet = %5.2f ", feet);
    printf("\nDistance in inches = %5.2f ", inch);
    printf("\nDistance in centimetres = %5.2f ", cm);
    return 0;
}