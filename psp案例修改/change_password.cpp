#include"change_password.h"
#include"public.h"
//模块的主体函数
void main_change_password()
{
	show_change_password();
	change_password();
}
//函数的前半部分的显示函数
void show_change_password()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ***********************修改密码**************************\n";
	cout << "\t  *********************************************************\n";
}
//函数用于修改用户密码
void change_password()
{
	User_infor changeU;
	User_infor userWHV;
	char fileloc[100];
	char pw_repeat[100];
	strcpy_s(fileloc, location);
	//cout << fileloc;//
	strcat_s(fileloc, "\\userinfor\\");
	cout << "请输入账号：";
	changeU.get_name();
	if (confirm(changeU))
	{	//连接用户的用户文件  1.1版本之后 需要改成功用函数 可以节省代码数量
		strcat_s(fileloc, changeU.name);
		fstream username(fileloc);
		

		ofstream output(fileloc,ios::in);
		//cout << fileloc;
		username >> userWHV;
		username.close();
		//cout << userWHV;
		fstream username1(fileloc);
		username1 >> changeU;
		username1.close();
		//cout << changeU;
		cout << "请输入密码：";
		changeU.get_password();
		//比较密码是否一致
		if (passwordcmp(userWHV, changeU))
		{
			cout << "身份验证成功，请输入您要修改的密码";
			changeU.get_password();
			cout << "请重复您的密码：";
			cin >> pw_repeat;
			cout << userWHV;
			if (compare(pw_repeat, changeU))
			{
				output << changeU;
				cout << "完成";
				output.close();
				getchar();
				getchar();
			}
			else
			{
				cout << "您输入的密码不同";
			}
		}
		else
		{
			cout << "密码错误";
			getchar();
			getchar();
		}
	}
	else 
	{
		cout << "账号不存在";
		getchar();
		getchar();
	 }
}