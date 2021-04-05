#include <iostream>
using namespace std;
class Account
{
public:
    int AccNo;
    char Name;
    float Balance = 0.00;
    Account(int Acc_No, char name, float balance)
    {
        AccNo = Acc_No;
        Name = name;
        Balance = balance;
    }
    void Input()
    {
        cout << "Enter Account Number: ";
        cin >> AccNo;
        cout << "Enter The Account Holder Name: ";
        cin >> Name;
        cout << "Enter The Account Opening Balance: ";
        cin >> Balance;
    }
    void Output()
    {
        cout << "Enter Account Number = " << AccNo << endl;
        cout << "Enter The Account Holder Name = " << Name << endl;
        cout << "Enter The Account Opening Balance = " << Balance << endl;
    }
};
void Switch1()
{
    int type;
    cout << "1. Current: " << endl;
    cout << "2. Savings: " << endl;
    cout << "Enter The Type of The Account: ";
    cin >> type;
    switch (type)
    {
    case 1:
        class Current : public Account
        {
        public:
            int choose;
            int current;
            void Switch2()
            {
                cout << "1. deposit: " << endl;
                cout << "2. Withdrawal: " << endl;
                cin >> choose;
                switch (choose)
                {
                case 1:
                    void deposit();
                    {
                        float deposit, cal;
                        cout << "Enter Deposit Amount: ";
                        cin >> deposit;
                        cal = Balance + deposit;
                        cout << "Total Balance = " << cal << endl;
                    }
                    break;
                case 2:
                    void Withdrawal();
                    {
                        float Withdrawal, cal;
                        cout << "Enter Withdrawal Amount: ";
                        cin >> Withdrawal;
                        if (Balance < Withdrawal)
                        {
                            cout << "Penalty Amount: ";
                        }
                        else
                        {
                            cal = Balance - Withdrawal;
                            if (Withdrawal > 2000)
                            {
                                cout << "Penalty Amount will be applyed: ";
                            }
                            else
                            {
                                cout << "Total Amount = " << cal << endl;
                            }
                        }
                    }
                    break;
                }
            }
            void Input()
            {
                Input();
                cout << "Enter Account Type: ";
                cin >> current;
                cout << " \n";
            }
            void Output()
            {
                Output();
                cout << "Type: " << current << "\n";
            }
        };
    }
}
int main()
{
    Account m1;
    return 0;
}