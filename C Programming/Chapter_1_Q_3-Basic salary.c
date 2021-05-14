#include<stdio.h>
int main(){
    float a,b,c,g;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f",&a);
    b=a*(40.0/100);
    printf("\nHis dearness= %5.2f",b);
    c=a*(20.0/100);
    printf("\nHis house rent= %5.2f",c);
    g=(a+b+c);
    printf("\nHis gross salary= %5.2f",g);
    return 0;
    }