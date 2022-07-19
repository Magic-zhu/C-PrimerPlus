// 4.编写一个程序，要求用户以整数方式输入秒数(使用long或long long变量存储)，然后以天、小
// 时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟
// 有多少秒。该程序的输出应与下面类似:
// Enter the number of seconds: 31600000
// 31600000seconds = 365 days,17hours, 46minutes, 40seconds

#include <string>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    long seconds;
    const long one_day = 24 * 60 * 60;
    const int one_hour = 60 * 60;
    const int one_minute = 60;
    cout << "Enter the number of seconds:";
    cin >> seconds;
    int left = seconds % one_day;
    int day = (seconds - left) / one_day;
    int left2 = left % one_hour;
    int hours = (left - left2) / one_hour;
    int left3 = left2 % one_minute;
    int minutes = (left2 - left3)/one_minute;
    cout << seconds << " seconds"
         << " = " << day << " days," << hours << " hours," << minutes << "minutes, " << left3 << "seconds" << endl;
    system("pause");
}