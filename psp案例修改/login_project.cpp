/*
��Ŀ�ƻ�ͷ�ļ�
��ģ��������º���
��1��void show_login_project();
��2��void main_login_project();
��3��void cmd_record_login_project();
�汾��1.1
���ߣ������
�޸���ʷ��2016.5.13 ����ܴ���
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
	cout << "\t\t\t |���������� ��־��¼| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    ��ģ�������¹���:\n";
	cout << "\t\t\t\t1.��½\n";
	cout << "\t\t\t\t2.�û�����\n";
	cout << "\t\t\t\t3.ϵͳ����\n";
	cout << "\t\t\t\t0.�˳�\n";
	cout << "\t\t\t    ��������������:";
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