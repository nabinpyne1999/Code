#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("msit_bca.txt");
    out << "My name is Nabin Pyne";
    out << "Roll 31001219012";
    out << "Sub C++";
    out.close();

    ifstream in;
    in.open("msit_bca.txt");
    char ch;
    int i, a = 0, s = 0, d = 0;

    while (in)
    {
        in.get(ch);
        i = ch;
        if (i > 63 && i < 91 || i > 96 && i < 123)
            a++;
    }
    cout << "\nNo. of Alphabets :: " << a << "\n";
    in.close();
    return 0;
}
