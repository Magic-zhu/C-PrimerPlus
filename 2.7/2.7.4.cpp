#include <string>
#include <iostream>
using namespace std;

int main()
{
    int age = 0;
    cout << "Enter your age:";
    cin >> age;
    cout << endl;
    cout << "Totally months:" << age * 12 << endl;
    system("pause");
}