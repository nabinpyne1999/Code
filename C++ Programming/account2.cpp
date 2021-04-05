#include<iostream>
#include<string.h>
using namespace std;

class ACCOUNT 
{
	public:
		char customer_name[50];
		int account_number;
		float opening_balance=0.00;

		void getdata1(char na[50],int ac,float ob)
		{
		//	customer_name=na;
			strcpy(customer_name,na);
			account_number=ac;
			opening_balance=ob;
	    }
		void putdata1()
		{
			cout<<"The Account holder name is: "<<customer_name<<endl;
			cout<<"The Account number is: "<<account_number<<endl;
			cout<<"The opening balance is: "<<opening_balance<<endl;
		}
};
				
class CURRENT:public ACCOUNT
{
	public:
	float money_deposit,update_money,withdraw_money;
	void get()
	{
	cout<<"enter 1 to withdraw"<<endl;
	cout<<"Enter 2 for deposit"<<endl;
	cout<<"enter the choice: ";
	int choice;
	cin>>choice;
		switch(choice)
		{
			case 1:
				
				cout<<"Enter the amount of money withdraw: ";
				cin>>withdraw_money;
				if(opening_balance>withdraw_money)
				{
				opening_balance=opening_balance-withdraw_money;
				if(opening_balance<2000)
					{
						cout<<"You can't withdraw"<<endl;
					}
				else
					{
						cout<<"Updated balance is: "<<opening_balance<<endl;
					}
		        }
			    else
			    {
			    	cout<<"Not enough money you have"<<endl;
			    }
				break;
			case 2:
			
			    cout<<"Enter the amount of money deposit: ";
				cin>>money_deposit;
				opening_balance=opening_balance+money_deposit;
				cout<<"Updated balance is: "<<opening_balance<<endl;
				break;
		}
	}
};
class SAVINGS:public ACCOUNT
{
	public:
	    float principal_balance,interest_rate,compound_interest=0.00,time,x;
		void getdata3(float pb,float ir,float t)
		{
		    float i;
			principal_balance=pb;
			interest_rate=ir;
			time=t;
			for(i=1;i<=time;i++)
			pb= pb + (pb*interest_rate)/100;
			x=pb;
	   // }
	//	void putdata3()
	//	{
			cout<<"The principal balance is: "<<principal_balance<<endl;
			cout<<"The interest rate is: "<<interest_rate<<endl;
			cout<<"The time is: "<<time<<endl;
			cout<<"The compound interest is: "<<x<<endl;
			cout<<"The opening balance is: "<<opening_balance<<endl;
	//	}
			float money_deposit,update_money,withdraw_money;
//	void get2()
//	{
	cout<<"enter 1 to withdraw"<<endl;
	cout<<"Enter 2 for deposit"<<endl;
	cout<<"enter the choice: ";
	int choice;
	cin>>choice;
		switch(choice)
		{
			case 1:				
				cout<<"Enter the amount of money withdraw: ";
				cin>>withdraw_money;
				if(opening_balance>withdraw_money)
				{
				opening_balance=opening_balance-withdraw_money;
				if(opening_balance<1000)
					{
						cout<<"You can't withdraw"<<endl;
					}
				else
					{
						cout<<"Updated balance is: "<<opening_balance<<endl;
					}
		        }
			    else
			    {
			    	cout<<"Not enough money you have"<<endl;
			    }
				break;
			case 2:			
			    cout<<"Enter the amount of money deposit: ";			    
				cin>>money_deposit;
				opening_balance=opening_balance+money_deposit;
				cout<<"Updated balance is: "<<opening_balance<<endl;
				break;
		}
	}
};
int main()
{
	CURRENT c;
	SAVINGS s;
	char cn[50];
	int an;
	float ob1,pb,ir,t;
	cout<<"Enter the Account holder name: ";
			gets(cn);
			cout<<"Enter the account number: ";
			cin>>an;
			cout<<"Enter the opening balance: ";
			cin>>ob1;	
	c.getdata1(cn,an,ob1);
	c.putdata1();
    cout<<"enter 1 to current account"<<endl;
	cout<<"Enter 2 for savings account"<<endl;
	cout<<"enter the account: ";
	int account;
	cin>>account;
		switch(account)
		{
			case 1:
                 cout<<"Current account activate"<<endl;
                  c.get();
                 break;
            case 2:     
                cout<<"Savings account activate"<<endl;
                cout<<"Enter the principal balance: ";
                cin>>pb;
	            cout<<"Enter the interest rate: ";
	            cin>>ir;
                cout<<"Enter the time: ";
	            cin>>t;
                s.getdata3(pb,ir,t);
              //  s.putdata3();
              //  s.get2();
        }
}
