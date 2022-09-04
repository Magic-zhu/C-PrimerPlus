// 1.编写一个程序，不断要求用户输入两个数，直到其中的一个为0。对于每两个数，程序将使用一个
// 函数来计算它们的调和平均数，并将结果返回给main(),而后者将报告结果。调和平均数指的是倒数平均
// 值的倒数，计算公式如下：
// 调和平均数=2.0*x*y/(x+y)

#include <Windows.h>
#include <iostream>

using namespace std;

double cau(int a, int b)
{
	return 2 * (a * b) / (a + b);
}

int main()
{
	int a;
	int b;
	cout << "请输入两个数，以空格分隔：";
	while ((cin >> a >> b) && a != 0 && b != 0)
	{
		const double r = cau(a, b);
		cout << "调和平均数 = " << r << endl;
		cout << "请输入两个数，以空格分隔：";
	}
	system("pause");
};

