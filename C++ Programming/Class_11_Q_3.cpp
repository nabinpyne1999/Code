#include<iostream>
using namespace std;
class TESTMATCH
{
    private:
    int t,c;
    float r;
    string d;
    void CALCULATECNTR()
    {
        r=(float)(c/100.0)+1;
    }
    public:
    void GETDATA(){
        cout<<"Enter Testcode: ";
        cin>>t;
        cout<<"Enter Descripition: ";
        cin>>d;
        cout<<"Enter NoofCandidates: ";
        cin>>c;
        CALCULATECNTR(); 
    }
    void PUTDATA(){
    cout<<"\n<<TEST MATCH INFORMATION_________________________>>";
    cout<<"\nTest Match Code : ___________________"<<t;
    cout<<"\nDescription : ________________"<<d;
    cout<<"\nTotal Candidates : ________________"<<c;
    cout<<"\nCenters Required : _________________"<<r;
    }
};
int main(){
    TESTMATCH D;
    D.GETDATA();
    D.PUTDATA();
    return 0;
}