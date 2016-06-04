#include"user_man.h"
/*
作    者：徐庆杰
时    间：2016.5.6
修改历史：
2016.5.6 徐庆杰 创建
*/
using namespace std;
void main_user_man()
{
	while (1)
	{
		show_user_man();
		cmd_record_user_man(cmd_user_man);
		if (cmd_user_man == CMD_USER_MAN_UP)
			break;
	}
}
void show_user_man()
{
	system("cls");
	cout << "\n\n\n\n";
	cout << "\t\t\t*************************\n";
	cout << "\t\t\t |个体程序设计 用户管理| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    本模块有以下功能:\n";
	cout << "\t\t\t\t1.注册用户\n";
	cout << "\t\t\t\t2.注销用户\n";
	cout << "\t\t\t\t3.修改用户密码\n";
	cout << "\t\t\t\t4.找回密码\n";
	cout << "\t\t\t\t5.用户安全问题设定\n";
	cout << "\t\t\t\t6.返回上一级\n";
	cout << "\t\t\t\t0.退出\n";
	cout << "\t\t\t    请输入您的命令:";
	cin >> cmd_user_man;
	cmd_user_man= 200+10 * cmd_user_man;
	if (cmd_user_man == 200)
		cmd_user_man = 0;
}

void cmd_record_user_man(int cmd_user_man)
{
	switch (cmd_user_man)
	{
	case CMD_USER_MAN_CREATEU:
		main_cre();
		break;
	case CMD_USER_MAN_DELETEU:
		main_delete();
		break;
	case  CMD_USER_MAN_CPD:
		main_change_password();
		break;
	case CMD_USER_MAN_CINFO:
		//
		break;
	case  CMD_USER_MAN_SQUE:
		//
		break;
	case  CMD_USER_MAN_UP:
		//
		break;
	case  CMD_EXIT:
		psp_exit();
		break;
	default:
		error_worning();
	}
}
