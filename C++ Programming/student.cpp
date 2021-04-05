#include <iostream>
using namespace std;
class Book
{
public:
    char bookname;
    float no;
    void ReadB()
    {
        cout << "Enter The book name: ";
        cin >> bookname;
        cout << "Enter number of pages: ";
        cin >> no;
        displayB();
    }
    void displayB()
    {
        cout << "Book Name " << bookname << "\t";
        cout << "Number of Pages " << no << "\t";
    }
};
class Student : public Book
{
public:
    char name;
    int age;
    void readData()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Age: ";
        cin >> age;
        display();
        condition1();
        condition2();
        if ((age < 20) && (age >= 16))
        {
            SecondaryStudent();
        }
        if ((age < 15) && (age >= 10))
        {
            PrimaryStudent();
        }
    }
    void display()
    {
        cout << "\tStudent Details:_________________"
             << "\n";
        cout << "Student Name: " << name << "\t";
        cout << "Student Age: " << age << "\t";
    }
    void PrimaryStudent()
    {
        readPrimary();
        displayPrimary();
    }
    void readPrimary()
    {
        char activity;
        float time;
        cout << "\nEnter Student Activity: ";
        cin >> activity;
        cout << "Enter the no. of hours: ";
        cin >> time;
    }
    void condition1()
    {

        if (age == 10)
            cout << "\n";
        {
            cout << "PrimaryStudent";
            cout << "Class: 5";
        }
        if (age == 11)
        {
            cout << "PrimaryStudent";
            cout << "Class: 6";
        }
        if (age == 12)
        {
            cout << "PrimaryStudent";
            cout << "Class: 7";
        }
        if (age == 13)
        {
            cout << "PrimaryStudent";
            cout << "Class: 8";
        }
        if (age == 14)
        {
            cout << "PrimaryStudent";
            cout << "Class: 9";
        }
        if (age == 15)
        {
            cout << "PrimaryStudent";
            cout << "Class: 10";
        }
    }
    void displayPrimary()
    {
        char activity;
        float time;
        cout << "\nEnter Student Activity: " << activity << "\t";
        cout << "\nEnter the no. of hours: " << time << "\t";
    }
    void SecondaryStudent()
    {
        readSecondary();
        displaySecondary();
        Equipment();
    }
    void readSecondary()
    {
        char activity;
        float time;
        cout << "\nEnter Student Activity: ";
        cin >> activity;
        cout << "Enter the no. of hours: ";
        cin >> time;
        cout << "SecondaryStudent";
    }
    void condition2()
    {
        if (age == 16)
        {
            cout << "SecondaryStudent \t";
            cout << "Class: 11 ";
        }
        if (age == 17)
        {
            cout << "SecondaryStudent";
            cout << "Class: 12";
        }
        if (age == 18)
        {
            cout << "SecondaryStudent \t";
            cout << "1st year: ";
        }
        if (age == 19)
        {
            cout << "SecondaryStudent";
            cout << "2nd year: ";
        }
        if (age == 20)
        {
            cout << "SecondaryStudent";
            cout << "3rd or final year: ";
        }
    }
    void displaySecondary()
    {
        char activity;
        float time;
        cout << "\nEnter Student Activity: " << activity << "\t";
        cout << "\nEnter the no. of hours: " << time << "\t";
    }
    void Equipment()
    { //for Secondary Students//
        char name;
        cout << "Enter subject name: ";
        cin >> name;
        if (name == 'p')
        {
            cout << "Sub Name: Physics Lab";
            cout << "Sub Role: practial";
        }
        if (name == 'm')
        {
            cout << "Sub Name: Math Project";
            cout << "Sub Role: assignment Work";
        }
        if (name == 'b')
        {
            cout << "Sub Name: Biology Lab";
            cout << "Sub Role: practial";
        }
        if (name == 'h')
        {
            cout << "Sub Name: Chemistry Lab";
            cout << "Sub Role: researching";
        }
        if (name == 'c')
        {
            cout << "Sub Name: Computer Lab";
            cout << "Sub Role: coding/developing";
        }
    }
};
int main()
{
    Student m1;
    m1.readData();
    Book m2;
    m2.ReadB();
    return 0;
}