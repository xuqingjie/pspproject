/*
登录后界面的主体部分
作    者：徐庆杰
时    间：6.3
修改历史: 6.3 创建
此模块包含的函数有
1）void main_mainfun();
2) void show_mainfun();
3) void cmdrecord_mainfun(int cmd_mainfun);
*/
#include"login_timerecord.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
void main_time_record()
{
	while (1)
	{
		show_time_record();
		cmd_time_record_back(cmd_time_record);
		if (cmd_time_record == CMD_U)
			break;
	}
}
void show_time_record()
{
		system("cls");
		cout << "\n\n\n\n";
		cout << "\t\t\t*************************\n";
		cout << "\t\t\t |个体程序设计 系统管理| \n";
		cout << "\t\t\t*************************\n";
		cout << "\n\n";
		cout << "\t\t\t    本模块有以下功能:\n";
		cout << "\t\t\t\t1.创建\n";
		cout << "\t\t\t\t2.修改\n";
		cout << "\t\t\t\t3 删除\n";
		cout << "\t\t\t\t4.查看\n";
		cout << "\t\t\t\t5.返回\n";
		cout << "\t\t\t\t0.退出\n";
		cout << "\t\t\t    请输入您的命令:";
		cin >> cmd_time_record;
		cmd_time_record = 110 + cmd_time_record;
		if (cmd_time_record == 110)
			cmd_time_record = CMD_EXIT;
		else if (cmd_time_record == 115)
			cmd_time_record = CMD_U;
	}
void cmd_time_record_back(int cmd_mainfun)
{
	switch (cmd_mainfun)
	{
	case CMD_CREATE:
		break;
	case CMD_CHANGE:
		break;
	case  CMD_DELETE:
		break;
	case  CMD_CHECK:
		break;
	case  CMD_U:
		break;
	case  CMD_EXIT:
		psp_exit();
		break;
	default:
		error_worning();
	}
}