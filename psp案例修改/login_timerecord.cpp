/*
��¼���������岿��
��    �ߣ������
ʱ    �䣺6.3
�޸���ʷ: 6.3 ����
��ģ������ĺ�����
1��void main_mainfun();
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
		cout << "\t\t\t |���������� ϵͳ����| \n";
		cout << "\t\t\t*************************\n";
		cout << "\n\n";
		cout << "\t\t\t    ��ģ�������¹���:\n";
		cout << "\t\t\t\t1.����\n";
		cout << "\t\t\t\t2.�޸�\n";
		cout << "\t\t\t\t3 ɾ��\n";
		cout << "\t\t\t\t4.�鿴\n";
		cout << "\t\t\t\t5.����\n";
		cout << "\t\t\t\t0.�˳�\n";
		cout << "\t\t\t    ��������������:";
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