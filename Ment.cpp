#include <iostream>

using namespace std;

int give_money(string num);

int main()
{
	int v;
	int max_v = 80;
	string num;
	int salary = 0;
	do
	{
		cin >> v >> num;
		salary += (v>=max_v ? give_money(num) : 0);
	}
	while (num != "A777AA");
	cout << "The salary of ment is " << salary - 1000;
	return 0;
}

int give_money(string num)
{
	int cool_num = (num[1]==num[2]) + (num[3]==num[2]) + (num[1]==num[3]);
	return cool_num==0 ? 100 :
		cool_num==1 ? 500 : 1000;
}
