#include"log_in.h"
#include"public.h"
void main_login()
{
	show_login();
	getU_P();
}
void show_login()	//显示登陆界面的部分主体
{
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  *************************登陆****************************\n";
	cout << "\t  *********************************************************\n";
}
void getU_P()	//提示获取用户的账号与密码 并做相应的检测
{
	User_infor inuser;
	cout << "\t\t\tUSER:";
	inuser.get_name();
	if (confirm(inuser))
	{
		get_user_location(inuser.name);
		//获取密码
		User_infor userloc;
		strcpy_s(userloc.name, "userinfor\\");
		strcat_s(userloc.name, inuser.name);
		//cout << userloc.name;
		ifstream g_u(userloc.name,ios::app);
		g_u >> userloc;
		//cout << userloc;
		//输入密码
		cout << "\t\t\tPASSWORD:";
		inuser.get_password();
		getchar();
		if (passwordcmp(inuser, userloc))
		{
			main_mainfun();
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
void login_result() //对登陆的结果进行反馈
{
}
void get_user_location(char username[])
{
	strcpy_s(user_file_location, location);
	strcat_s(user_file_location,"\\user_files\\");
	strcat_s(user_file_location, username);

}