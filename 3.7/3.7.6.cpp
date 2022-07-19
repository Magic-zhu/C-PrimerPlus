// 6.编写一个程序，要求用户输入驱车里程(英里)和使用汽油量(加仑)，然后指出汽车耗油量为一
// 加仑的里程。如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后
// 指出欧洲风格的结果一一即每100公里的耗油量(升)。
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
    cout << "百公里油耗为->" << oil / distance * 100 << endl;
    system("pause");
}