#include <string>
#include <iostream>
using namespace std;

class Me
{
public:
    string name = "alex";
    string address = "china";
};

int main()
{
    Me alex;
    cout << alex.name << endl;
    cout << alex.address << endl;
    system("pause");
    return 0;
}