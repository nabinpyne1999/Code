#include<iostream>
using namespace std;
class Flight
{
private:
    int f;
    float s,fuel;
    string d;
    void CalFuel()
    {
        if(s<=1000)
        {
            cout<<"Fuel=500";
        }
        if((s>=1000)&&(s<=2000))
        {
            cout<<"Fuel=1100";
        }
        if(s>=2000)
        {
            cout<<"Fuel=2200";
        }
    }
public:
 void Feed_Info()
 {
     cout<<"Enter your flight number: ";
     cin>>f;
     cout<<"Enter Destination: ";
     cin>>d;
     cout<<"Enter Destance: ";
     cin>>s;
     CalFuel();
 }
};
int main()
{
    Flight F;
    F.Feed_Info();
    return 0;
}