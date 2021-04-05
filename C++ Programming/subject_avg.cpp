#include <iostream>
using namespace std;
class Sub
{
public:
    int a, b, c;
    float avg, total;
    void input()
    {
        cout << "Enter 1st subject: ";
        cin >> a;
        cout << "Enter 2nd subject: ";
        cin >> b;
        cout << "Enter 3rd subject: ";
        cin >> c;
    }
    void cal()
    {
        total = a + b + c;
        avg = total / 3;
    }
};
class Grade : public Sub
{
public:
    void GradeMe()
    {
        if (avg >= 80)
        {
            cout << "A";
        }
        if ((avg < 79) && (avg >= 60))
        {
            cout << "B";
        }
        if ((avg < 59) && (avg >= 40))
        {
            cout << "C";
        }
        if (avg < 40)
        {
            cout << "F";
        }
    }
    void output()
    {
        cout << "1st subject = " << a << endl;
        cout << "2nd subject = " << b << endl;
        cout << "3rd subject = " << c << endl;
        cout << "Total number of 3 subjects = " << total << endl;
        cout << "Avg of 3 subjects = " << avg << endl;
        GradeMe();
    }
};
int main()
{
    Grade obj1;
    obj1.input();
    obj1.cal();
    //obj1.GradeMe();
    obj1.output();
    return 0;
}
