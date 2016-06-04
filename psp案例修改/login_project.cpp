/*
项目计划头文件
此模块包括以下函数
（1）void show_login_project();
（2）void main_login_project();
（3）void cmd_record_login_project();
版本号1.1
作者：徐庆杰
修改历史：2016.5.13 徐庆杰创建
*/
#include"login_project.h"

#include"public.h"
using namespace std;
void main_login_project(void)
{
	while (1)
	{
		show_login_project();
		cmd_record_login_project(cmd_login_project);

	}
}
void show_login_project(void)
{
	system("cls");
	cout << "\n\n\n\n";
	cout << "\t\t\t*************************\n";
	cout << "\t\t\t |个体程序设计 日志记录| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    本模块有以下功能:\n";
	cout << "\t\t\t\t1.登陆\n";
	cout << "\t\t\t\t2.用户管理\n";
	cout << "\t\t\t\t3.系统管理\n";
	cout << "\t\t\t\t0.退出\n";
	cout << "\t\t\t    请输入您的命令:";
	cin >> cmd_login_project;
	cmd_login_project = 100 * cmd_login_project;
	
}
void cmd_record_login_project(int cmd_initial)
{
	system("cls");
	switch (cmd_initial)
	{
	case CMD_LOGIN:

		break;
	case CMD_USER_MAN:
		
		break;
	case CMD_SYS_MAN:
		
		break;
	case CMD_EXIT:
		psp_exit();
		break;
	default:
		error_worning();



	}

}