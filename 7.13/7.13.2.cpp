// 2.编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存储在一个数组中。程序允许用户提
// 早结束输入，并在一行上显示所有成绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入、
// 显示和计算平均成绩。

#include <iostream>

using namespace std;

int inputList(int list[])
{
    int len = 0;
    cin >> list[len];
    while (cin.get() != '\n' && len < 9)
    {
        len++;
        cin >> list[len];
    }
    return len + 1;
}

void showList(int list[], const int len)
{
    for (int Index = 0; Index < len; Index++)
    {
        cout << list[Index] << endl;
    }
}

void avgList(int list[], const int len)
{
    double sum = 0;
    for (int Index = 0; Index < len; Index++)
    {
        sum += list[Index];
    }
    if (len != 0)
    {
        cout << "平均成绩为:" << sum / len << endl;
    }
    else
    {
        cout << "平均成绩为:" << 0 << endl;
    }
}

int main()
{
    int list[10];
    int len = 0;
    len = inputList(list);
    showList(list, len);
    avgList(list, len);
    int b;
    cin >> b ;
    return 0;
};