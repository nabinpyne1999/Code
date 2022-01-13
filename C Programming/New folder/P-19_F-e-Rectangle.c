#include<stdio.h>
void main()
{
    float l,b,r,a1,a2,p,c;
    printf("Enter The Length and Breadth of a Rectangle: ");
    scanf("%f%f",&l,&b);
    a1=l*b;
    p=2*(l+b);
    printf("\n The Area= %5.2f and Perimeter= %5.2f of The Rectangle",a1,p);
    printf("\nEnter The Radius of a Circle: ");
    scanf("%f",&r);
    a2=(3.145*r*r);
    c=(2*3.145*r);
    printf("\nThe Area= %5.2f and Circumference= %5.2f of The Circle",a2,c);
}