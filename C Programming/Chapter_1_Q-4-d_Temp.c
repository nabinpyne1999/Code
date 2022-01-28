#include<stdio.h>
int main(){
    float c,f;
    printf("Enter Temp of the city in Fahrenheit: ");
    scanf("%f",&f);
    c=(5*f-160.0)/9;
    printf("\nTemp int Centigrade: %5.2f",c);
    return 0;
}