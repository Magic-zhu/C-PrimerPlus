// 4.许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩法的变体。在这些玩法中，玩家从
// 一组被称为域号码(field number)的号码中选择几个。例如，可以从域号码1~47中选择5个号码；还可
// 以从第二个区间（如1一27）选择一个号码（称为特选号码）。要赢得头奖，必须正确猜中所有的号码。中
// 头奖的几率是选中所有域号码的几率与选中特选号码几率的乘积。例如，在这个例子中，中头奖的几率是
// 从47个号码中正确选取5个号码的几率与从27个号码中正确选择1个号码的几率的乘积。请修改程序清
// 单7.4，以计算中得这种彩票头奖的几率。
#include <vector>
using namespace std;
int main()
{
    vector<int> field_number;
    for (int i = 1; i < 48; i++)
    {
        field_number.push_back(i);
    }
    for_each(field_number.begin(),field_number.end(),[](){});
    return 0;
}