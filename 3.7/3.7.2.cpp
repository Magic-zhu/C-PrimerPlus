// 2.编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个
// 变量来存储这些信息。)该程序报告其BMI(Body Mass Index,体重指数)。为了计算BMI,该程序以英寸
// 的方式指出用户的身高(1英尺为12英寸)，并将以英寸为单位的身高转换为以米为单位的身高(1英寸
// =0.0254米)。然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅)。最后，计算相应的
// BM一体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。

#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const int uni = 12;
    int ft;
    int in;
    int weight;
    cout << "Please input your data:";
    cin >> ft >> in >> weight;
    cout << ft << in << weight;
    const double BMI = weight/2.2/(pow(((ft*12+in)*0.0254),2));
    cout << "BMI: " << BMI<< endl;
    system("pause");
}