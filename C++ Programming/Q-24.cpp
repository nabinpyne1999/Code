#include<iostream>
#include<string.h>
using namespace std;
class Garments
{
    private: 
    int GSize;
    float GPrice;
    char GCode[15],GType[15];
    char GFabric[20];
    public:
    Garments()
    {
        strcpy(GCode,"NOT ALLOTTED");
        strcpy(GType,"NOT ALLOTTED");
        strcpy(GFabric,"NOT ALLOTTED");
        GSize=0;
        GPrice=0;
    }
    void Assign()
    {
        if((strcmp(GFabric,"COTTON")==0)&&(strcmp(GType,"TROUSER")==0))
        {
            GPrice=1300.0;
        }
         if((strcmp(GFabric,"COTTON")==0)&&(strcmp(GType,"SHIRT")==0))
        {
            GPrice=1100.0;
        }
         if((strcmp(GFabric,"SILK")==0)&&(strcmp(GType,"TROUSER")==0))
        {
            GPrice=(1300.0*90)/100;
        }
        if((strcmp(GFabric,"SILK")==0)&&(strcmp(GType,"SHIRT")==0))
        {
            GPrice=(1100.0*90)/100;
        }
        cout<<"Garments Price= "<<GPrice<<endl;
    
    }
    void Input()
    {
    cout<<"Enter The Garments Code: ";
    gets(GCode);
    cout<<"Enter The Garments Fabric: ";
    gets(GFabric);
    cout<<"Enter The Garments Type: ";
    gets(GType);
    cout<<"Enter The Garments Size: ";
    cin>>GSize;
    Assign();
    }
    void Display()
    {
        cout<<"The Garments Code= ";
        puts(GCode);
        cout<<"The Garments Fabric= ";
        puts(GFabric);
        cout<<"The Garments Type= ";
        puts(GType);
        cout<<"The Garments Size= "<<GSize<<endl;
        cout<<"Garments Price= "<<GPrice<<endl;
    }
    
};
int main()
{
    Garments a;
    a.Input();
    a.Display();
    return 0;

}