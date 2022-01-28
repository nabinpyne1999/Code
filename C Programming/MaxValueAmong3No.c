#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%f%f%f",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        printf("Max number: %5.2f",a);
    }
    if ((b>c)&&(b>a))
    {
        printf("Max number: %5.2f",b);
    }
    else
    {
        printf("Max number: %5.2f",c);
    }
    return 0;   
 }