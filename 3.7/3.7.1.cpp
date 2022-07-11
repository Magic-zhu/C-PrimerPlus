// 1.编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺
// 和英寸。该程序使用下划线字符来指示输入位置。另外，使用一个cost符号常量来表示转换因子。

#include <string>
#include <iostream>
using namespace std;

int main()
{
    const int uni = 12;
    int inch;
    cout << "Please input your height(inch):__\b\b";
    cin >> inch;
    cout << "Your height is " << inch/12 << " inch" << endl;
    system("pause");
}