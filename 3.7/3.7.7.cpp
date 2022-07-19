// 7.编写一个程序，要求用户按欧洲风格输入汽车的耗油量(每100公里消耗的汽油量(升))，然后将
// 其转换为美国风格的耗油量一每加仑多少英里。注意，除了使用不同的单位计量外，美国方法(距离/
// 燃料)与欧洲方法(燃料/距离)相反。100公里等于62.14英里，1加仑等于3.875升。因此，19mpg大约
// 合12.41/100km，127mpg大约合8.71/100km。
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
    double distance;
    double oil;
    cout << "请输入驱车公里数：";
    cin >> distance;
    cout << "请输油耗：";
    cin >> oil;
    cout << "百公里油耗为->" << distance * 62.14 / 100 / (oil / 3.875) << endl;
    system("pause");
}