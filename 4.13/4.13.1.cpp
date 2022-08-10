// 1，编写一个C++程序，如下述输出示例所示的那样请求并显示信息:
// What is your first name? Betty Sue
// What is your last name? Yewe
// What letter grade do you deserve? B
// What is your age? 22
// Name：Yewe, Betty Sue
// Grade：C
// Age: 22
// 注意，该程序应该接受的名字包含多个单词。另外，程序将向下调整成绩，即向上调一个字母。假设
// 用户请求A、B或C，所以不必担心D和F之间的空档。

#include <string>
#include <iostream>
#include <math.h>
#include <string>

#include <Windows.h>

using namespace std;
int main()
{
    // 设置控制台 utf-8
    SetConsoleOutputCP(65001);
    char name[20];
    string lastName;
    string level;
    int age;
    cout << "What is your first name?";
    cin.getline(name, 20);
    cout << "What is your last name?";
    cin >> lastName;
    cout << "What letter grade do you deserve?";
    cin >> level;
    if (level == "A")
    {
        level = "B";
    }
    else if (level == "B")
    {
        level = "C";
    }
    else
    {
        level = "D";
    };
    cout << "What is your age?";
    cin >> age;

    cout << "Name:" << name << "," << lastName << endl;
    cout << "Grade:" << level << endl;
    cout << "Age:" << age << endl;
    system("pause");
}