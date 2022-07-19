// 3.编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。1度为
// 60分，1分等于60秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
// 下面是该程序运行时的情况：
// Enter a latitude in degrees,minutes,and seconds:
// First,enter the degrees:37
// Next,enter the minutes of arc:51
// Finally,enter the seconds of arc:19
// 37 degrees,51 minutes,19 seconds =37.8553 degrees

#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double degrees;
    double minutes;
    double seconds;
    cout << "Enter a latitude in degrees,minutes,and seconds:" << endl;
    cout << "First,enter the degrees:";
    cin >> degrees;
    cout << "Second,enter the minutes:";
    cin >> minutes;
    cout << "Third,enter the seconds:";
    cin >> seconds;
    double result = degrees + minutes / 60 + seconds / 3600;
    cout << degrees << " degrees," << minutes << " minutes," << seconds << " seconds =" << result << " degrees" << endl;
    system("pause");
}