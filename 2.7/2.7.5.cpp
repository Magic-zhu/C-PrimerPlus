// 请编写一个个程序，其中的main()调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华
// 氏温度值)。该程序按下面的格式要求用户输入摄氏温度值，并显示结果：

#include <string>
#include <iostream>
using namespace std;

double calculate(double input)
{
    return 1.8 * input + 32;
}

int main()
{
    double input = 0;
    cout << "Please enter a Celsius value:";
    cin >> input;
    cout << endl;
    cout << input << " "
         << "degrees Celsius is " << calculate(input) << " degrees Fahrenheit." << endl;
    system("pause");
}