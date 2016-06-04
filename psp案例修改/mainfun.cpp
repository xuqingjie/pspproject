/*
登录后界面的主体部分
作    者：徐庆杰
时    间：5.18
描    述：
修改历史: 5.18创建
此模块包含的函数有
1）void main_mainfun();
2) void show_mainfun();
3) void cmdrecord_mainfun(int cmd_mainfun);
*/
#include"mainfun.h"
#include<iostream>
#include<stdlib.h>


void main_mainfun()
{	
	while (1)
	{
		show_mainfun();
		cmdrecord_mainfun(cmd_mainfun);
		if (cmd_mainfun == CMD_U)
		break;

	}
}
void show_mainfun()
{
	system("cls");
	cout << "\n\n\n\n";
	cout << "\t\t\t*************************\n";
	cout << "\t\t\t |个体程序设计 系统管理| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    本模块有以下功能:\n";
	cout << "\t\t\t\t1.时间日志记录\n";
	cout << "\t\t\t\t2.周总结\n";
	cout << "\t\t\t\t3.项目计划\n";
	cout << "\t\t\t\t9.退出登录\n";
	cout << "\t\t\t\t0.退出\n";
	cout << "\t\t\t    请输入您的命令:";
	cin >> cmd_mainfun;
	cmd_mainfun = 100 + 10 * cmd_mainfun;
	if (cmd_mainfun == 100)
		cmd_mainfun = 0;
	else if (cmd_mainfun == 190)
	cmd_mainfun = CMD_U;
}
void cmdrecord_mainfun(int cmd_mainfun)
{
	switch (cmd_mainfun)
	{
	case CMD_LOGIN_MAINFUN_TIMERECORD:
		main_time_record();
		break;
	case CMD_LOGIN_MAINFUN_PROPLAN:
		//main_
		break;
	case CMD_LOGIN_MAINFUN_WEEKSUM:
		//
		break;
	case CMD_U:
		//
		break;
	case CMD_EXIT:
		psp_exit();
		break;
	default:
		error_worning();
	}
}