#include"sys_man.h"
/*
此模块为初始界面的头文件
作    者：徐庆杰
时    间：5.06
修改历史: 5.06创建
此模块包含的函数有
1）void main_sys_man();
2) void show_sys_man();
3) void cmdrecord_sys_man(int cmd_sys_man);

版本号1.1
*/
using namespace std;
void main_sys_man()
{
	while (1)
	{
		show_sys_man();
		cmd_record_sys_man(cmd_sys_man);
		if (cmd_sys_man == CMD_SYS_MAN_UP)
			break;
	}
}
void show_sys_man()
{
	system("cls");
	cout << "\n\n\n\n";
	cout << "\t\t\t*************************\n";
	cout << "\t\t\t |个体程序设计 系统管理| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    本模块有以下功能:\n";
	cout << "\t\t\t\t1.修改文件存储位置（不建议）\n";
	cout << "\t\t\t\t2.返回上一层\n";
	cout << "\t\t\t\t0.退出\n";
	cout << "\t\t\t    请输入您的命令:";
	cin >> cmd_sys_man;
	cmd_sys_man = 300 + 10 * cmd_sys_man;
	if (cmd_sys_man == 300)
		cmd_sys_man = 0;
	
}

void cmd_record_sys_man(int cmd_user_man)
{
	switch (cmd_user_man)
	{
	case CMD_SYS_MAN_STORE:
		main_cha();
		break;
	case  CMD_SYS_MAN_UP:
		break;
	case  CMD_EXIT:
		psp_exit();
		break;
	default:
		error_worning();
	}
}
