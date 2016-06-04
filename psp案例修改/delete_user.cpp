#include"delete_user.h"
#include<stdio.h>

/*
本模块为删除模块的头文件
登陆模块包含的函数为
1)void main_login();
2)void show_login();	//显示登陆界面的部分主体
3)void getU_P();		//提示获取用户的账号与密码 并做相应的检测
4)void login_result(); //对登陆的结果进行反馈
5)int confirm_p();     //判断用户输入的密码是否一致
版本号1.1
作    者：徐庆杰
修改历史：2016.5.23 徐庆杰创建
*/
void main_delete()
{
	show_delete();
	deleteU_P();
}
void show_delete()	//显示登陆界面的部分主体
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  *************************注销****************************\n";
	cout << "\t  *********************************************************\n";
}
void deleteU_P()	//提示获取用户的账号与密码 并做相应的检测
{
	User_infor inuser;
	cout << "\t\t\tUSER:";
	inuser.get_name();
	if (confirm(inuser))
	{
		//获取密码
		char filename[100];
		char command[100]="del ";
		User_infor userloc;
		strcpy_s(userloc.name, "E:\\C语言文件\\psp案例修改\\x64\\Debug\\userinfor\\");
		strcat_s(userloc.name, inuser.name);
		strcpy_s(filename, userloc.name);
		//cout << userloc.name;
		ifstream g_u(userloc.name, ios::app);
		g_u >> userloc;
		g_u.close();
		//cout << userloc;
		//输入密码
		cout << "\t\t\tPASSWORD:";
		inuser.get_password();
		//getchar();
		cout << filename;
		strcat_s(command, filename);
		getchar();
		getchar();
		if (passwordcmp(inuser, userloc))
		{
			cout << "password correct";
			errno = 0;
			cout << errno;
			cout<<(_unlink(filename));
			cout << errno;
			/*system(command);*/
			getchar();
			getchar();
		}
		else
		{
			cout << "\n\n\n\n\t  *********************************************************\n";
			cout << "\t  -----------------------密码不正确------------------------\n";
			cout << "\t  *********************************************************\n";
			getchar();
			getchar();
		}

	}
	else
	{

		cout << "\n\n\n\n\t  *********************************************************\n";
		cout << "\t  -----------------------账号不存在------------------------\n";
		cout << "\t  *********************************************************\n";
		getchar();
		getchar();
	}



}
/*void login_result() //对登陆的结果进行反馈
{
}*/