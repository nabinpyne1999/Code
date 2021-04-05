#include<iostream>
using namespace std;
class worker
{
    private:
    int wno;
    char wname;
    float hrwrk,wgrate,totwage;
    public:
    void int_data(){
        cout<<"Enter worker number: ";
        cin>>wno;
        cout<<"Enter woker name: ";
        cin>>wname;
        cout<<"Enter worker total hours worked: ";
        cin>>hrwrk;
        cout<<"Enter worker income per hours worked: ";
        cin>>wgrate;
        calcwg();
    }
    void calcwg(){
        totwage=hrwrk*wgrate;
    }
    void out_data(){
        cout<<"Worker number "<<wname<<endl;
        cout<<"Worker total hours worked "<<hrwrk<<endl;
        cout<<"Worker price per hours worked "<<wgrate<<endl;
        cout<<"Worker total price "<<totwage<<endl;
    }
};
int main()
{
    worker x;
    x.int_data();
    x.out_data();
    return 0;
}