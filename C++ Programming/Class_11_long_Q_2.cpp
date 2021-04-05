#include<iostream>
using namespace std;
class Applicant
{
    private: 
    float Agg;
    long ANo;
    string Name;
    char Grade;
void GradeMe(){
if(Agg>=80)
{
    cout<<"A";
}
if((Agg<80)&&(Agg>=65))
{
    cout<<"B";
}
if((Agg<65)&&(Agg>=50))
{
    cout<<"C";
}
if(Agg<50)
{
    cout<<"D";
        }
}
public:
void ENTER(){
    cout<<"Enter Admission Number Marks: ";
    cin>>ANo;
    cout<<"Enter Name: ";
    cin>>Name;
    cout<<"Enter Value of Aggrgate Marks: ";
    cin>>Agg;
    GradeMe();
    }
    void RESULT(){
    ENTER();    
    }
    void Calculate()
    {
        float Cal;
        Cal=(Agg*100.0)/100;
        cout<<"\nCalculate marks percentage:  "<<Cal;
    }
    void READMARKS(){
        Calculate();
    }
    void Displaymarks(){
        READMARKS();
    }
};
int main(){
    Applicant N;
    N.RESULT();
    N.Displaymarks();
    return 0;
}