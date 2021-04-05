#include<iostream>
using namespace std;
class Student 
{
    public:
    int a,b,c;
    float s;
    void Input()
    {
        cout<<"Enter 1st number: ";
        cin>>a;
        cout<<"Enter 2nd number: ";
        cin>>b;
        cout<<"Enter 3rd number: ";
        cin>>c;
        s=(a+b+c)/3;
        cout<<"Total number's Avg ="<<s<<endl;
    }
    void Gradtion()
    {
        if(s<40)
        {
            cout<<"F";
        }
        if((s>=40)&&(s<=59))
        {
            cout<<"C";
        }
        if((s>=60)&&(s<=79))
        {
            cout<<"B";
        }
        if(s>=80)
        {
            cout<<"A";
        }
    }
};
int main()
{
    Student z;
    z.Input();
    z.Gradtion();
    return 0;
}