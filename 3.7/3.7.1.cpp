// 1.编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺
// 和英寸。该程序使用下划线字符来指示输入位置。另外，使用一个cost符号常量来表示转换因子。

#include <string>
#include <iostream>
using namespace std;

int main()
{
    int hours;
    int minutes;
    cout << "Enter the number of hours:";
    cin >> hours;
    cout << endl;
    cout << "Enter the number of minutes:";
    cin >> minutes;
    cout << endl;
    cout << "Time:" << hours << ":" << minutes << endl;
    system("pause");
}