/*本模块实现创建用户的功能
保函以下几个模块
1)void main_cre();
2)void show_cre();
3)void cre_user();
变量为user类的变量user；
时    间：2016-05-20
作    者：徐庆杰
修改历史：2015-5-20 徐庆杰 创建
*/

#include"user_man_create.h"

void main_cre()
{
	cre_user();
}

void show_cre()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ---------------------------注册--------------------------\n";
	cout << "\t  *********************************************************\n";
}
void cre_user()
{
	char filename[80];
	char password_repeat[20];
	User_infor user;
	while (1)
	{
		show_cre();
		cout << "\n\n\n\t\t请输入您的账号：";
		user.get_name();
	if (confirm(user))
	{
		cout << "\n\t\t账户已存在请重新输入\n";
		getchar();
		getchar();
		continue;
	}
	cout << "\n\t\t请输入您的密码：";
	user.get_password();
	cout << "\n\t\t请重复您的密码：";
	cin >> password_repeat;
	
	if (compare(password_repeat, user))
	{
		cout << "\n\t\t请输入您的姓名：";
		user.get_in_name();
		user.get_id();
		strcpy_s(filename, location);
		strcat_s(filename, "\\userinfor\\");
		strcat_s(filename, user.name);
		//cout << filename;
		ofstream create(filename, ios::out);
		create << user;
		create_user_file(user.name);
		getchar();
		//getchar();
		break;
	}
	else
	{
		cout << "\n\t\t密码输入错误请重新输入\n";
		getchar();
		getchar();
	}
	}
}