// 3.下面是一个结构声明：
// struct box
// char maker[40]
// float height;
// float width;
// float length;
// float volume;
// }:
// a.编写一个函数，按值传递box结构，并显示每个成员的值。
// b.编写一个函数，传递box结构的地址，并将volume成员设置为其他三维长度的乘积。
// c.编写一个使用这两个函数的简单程序。

#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void showBox(const box input)
{
    cout << input.maker << endl;
    cout << input.height<< endl;
    cout << input.width << endl;
    cout << input.length << endl;
    cout << input.volume << endl;
}

void cauBox(box* input)
{
    input->volume = input ->width * input -> height * input -> length;
}

int main()
{
    box test = {"猜猜我是谁", 100, 100, 100, 100};
    showBox(test);
    cauBox(&test);
    // # 暂停一下程序
    int a;
    cin >> a; 
    return 0;
}