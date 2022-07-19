// 5.编写一个程序，要求用户输入全球当前的人口和美国当前的人口(或其他国家的人口)。将这些信
// 息存储在long long变量中，并让程序显示美国(或其他国家)的人口占全球人口的百分比。该程序的输出
// 应与下面类似:
// Enter the world's population: 6898758899
// Enter the population of the Us: 310783781
// The population of the US is 4.50492% of the world population.
#include <string>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    long long population;
    long long us;
    cout << "Enter the world's population:";
    cin >> population;
    cout << "Enter the population of the US:";
    cin >> us;
    double result = (us * 100.0f / population);
    cout << "The population of the US is " << result << "% of the world population." << endl;
    system("pause");
}