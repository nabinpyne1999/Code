#include<iostream>
#include<math.h>
using namespace std;
double area(double);
double area(double,double);
double area (double,double,double);
int main()
{
    double e,f,g,h,i,j,k,l,m;
    e=area(h,i,j);
    f=area(k,l);
    g=area(m);
    return 0;
}
double area (double a,double b,double c)
{
    double d,area;
    cout<<"Enter 3 sides of a triangle: ";
    cin>>a>>b>>c;
    d=a+b+c;
    area=sqrt(d*(d-a)*(d-b)*(d-c));
    cout<<"The Area of this triangle "<<area<<endl;
    return 0;    
}
double area (double x,double y)
{
    double area;
    cout<<"Enter 2 sides of a rectangle: ";
    cin>>x>>y;
    area=x*y;
    cout<<"The area of this rectangle "<<area<<endl;
    return 0;
}
double area (double s)
{
    double area;
    cout<<"Enter side of a square: ";
    cin>>s;
    area=s*s;
    cout<<"The area of this square "<<area;
    return 0;
}