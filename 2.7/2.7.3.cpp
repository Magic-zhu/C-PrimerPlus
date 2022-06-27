#include <string>
#include <iostream>
using namespace std;

void gen1()
{
    cout << "Three blind mice" << endl;
}

void gen2()
{
    cout << "See how they run" << endl;
}

int main()
{

    gen1();
    gen1();
    gen2();
    gen2();
    system("pause");
    return 0;
}