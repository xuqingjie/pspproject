/*
��ģ��Ϊ�����ʼ����������ĺ���Ϊ
(1)main_initial();
(2)show_initial();
(3)cmd_record();
*/
/*
���ߣ������
ʱ�䣺2016.5.01
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
	cout << "\t\t\t |���������� ��־��¼| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    ��ģ�������¹���:\n";
	cout << "\t\t\t\t1.��½\n";
	cout << "\t\t\t\t2.�û�����\n";
	cout << "\t\t\t\t3.ϵͳ����\n";
	cout << "\t\t\t\t0.�˳�\n";
	cout << "\t\t\t    ��������������:";
	cin >> cmd_initial;
	cmd_initial = 100 * cmd_initial;	
}

/*
��ʼ��������������
���ܣ������û���
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





