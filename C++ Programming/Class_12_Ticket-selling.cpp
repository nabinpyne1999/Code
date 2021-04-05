#include<iostream>
using namespace std;
class ticbooth
{
    public:
    double t,n=0,n1=0,m=0,s,s1=0,m1=0;
    void caseTicket(){
        cout<<"Enter the total Ticket: ";
        cin>>t;
        cout<<"Enter the 1st total ticket selling: ";
        cin>>n;
        m=n*2.5;
        cout<<"1st totals amount of money collected "<<m<<endl;
        if(t<n)
        {
            cout<<"Amount Invalid";
            exit;        
           }
           if(t>=n)
           {
               s=t-n;
           }
           cout<<"Enter the 2nd total ticket selling: ";
           cin>>s1;
           if(s<s1){
               cout<<"Amount Invalid"<<endl;
               exit;
           }
           else
           {
               m1=s1*2.5;
               cout<<"2nd totals amount of money collected "<<m1<<endl;
               n1=n+s1;
           cout<<"Total ticket sold out "<<n1<<endl;
           }
    }
};
int main()
{
    ticbooth a;
    a.caseTicket();
    return 0;
}