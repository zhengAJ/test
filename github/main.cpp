#include<iostream>
#include<string>
/*
1.网站404攻击
2.网站篡改攻击
3.网站攻击记录
4.DNS攻击
5.服务器重启攻击

*/

int main(void)
{
	using namespace std;
	string name;
	string pwd;

	cout << "请输入账号";
	cin >> name;
	cout << "请输入密码";
	cin >> pwd;

	//权限判断
	if (name == "54hk" && pwd == "123456") {
		cout << "1.网站404攻击" << endl;
		cout << "2.网站篡改攻击" << endl;
		cout << "3.网站攻击记录" << endl;
		cout << "4.DNS攻击" << endl;
		cout << "5.服务器重启攻击" << endl;
		cout << "6.DNS攻击" << endl;
	}
	else {
		cout << "用户名或密码错误" << endl;
	}

	system("pause");
	return 0;
}