// 6.编写一个程序，其 main( )调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）。
// 该程序按下面的格式要求用户输入光年值，并显示结果：
// Enter the number of light years：4.2
// 4.2 light years = 265608 astronomical units.

#include <string>
#include <iostream>
using namespace std;

double calculate(double input)
{
    return 63240 * input;
}

int main()
{
    double input = 0;
    cout << "Enter the number of light years:";
    cin >> input;
    cout << endl;
    cout << input << " "
         << "light years = " << calculate(input) << " astronomical units." << endl;
    system("pause");
}