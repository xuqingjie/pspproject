/*
此模块为程序初始化界面包括的函数为
(1)main_initial();
(2)show_initial();
(3)cmd_record();
*/
/*
作者：徐庆杰
时间：2016.5.01
*/
#include"psp_initial.h"
#include"public.h"
using namespace std;
void initialmain(void)
{
	while (1)
	{
		show_initial();
		cmd_record_initial(cmd_initial);
	}
}
void show_initial(void)
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
	cin >> cmd_initial;
	cmd_initial = 100 * cmd_initial;	
}

/*
初始化界面的命令处理部分
功能：处理用户在
*/
void cmd_record_initial(int cmd_initial)
{
	system("cls");
	switch (cmd_initial)
	{
		case CMD_LOGIN:
			main_login();
			break;
		case CMD_USER_MAN:
			main_user_man();
			break;
		case CMD_SYS_MAN:
			main_sys_man();
			break;
		case CMD_EXIT:
			psp_exit();
			break;
		default:
			error_worning();
	}	
}





