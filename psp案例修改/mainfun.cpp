/*
��¼���������岿��
��    �ߣ������
ʱ    �䣺5.18
��    ����
�޸���ʷ: 5.18����
��ģ������ĺ�����
1��void main_mainfun();
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
	cout << "\t\t\t |���������� ϵͳ����| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    ��ģ�������¹���:\n";
	cout << "\t\t\t\t1.ʱ����־��¼\n";
	cout << "\t\t\t\t2.���ܽ�\n";
	cout << "\t\t\t\t3.��Ŀ�ƻ�\n";
	cout << "\t\t\t\t9.�˳���¼\n";
	cout << "\t\t\t\t0.�˳�\n";
	cout << "\t\t\t    ��������������:";
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