#include"sys_man.h"
/*
��ģ��Ϊ��ʼ�����ͷ�ļ�
��    �ߣ������
ʱ    �䣺5.06
�޸���ʷ: 5.06����
��ģ������ĺ�����
1��void main_sys_man();
2) void show_sys_man();
3) void cmdrecord_sys_man(int cmd_sys_man);

�汾��1.1
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
	cout << "\t\t\t |���������� ϵͳ����| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    ��ģ�������¹���:\n";
	cout << "\t\t\t\t1.�޸��ļ��洢λ�ã������飩\n";
	cout << "\t\t\t\t2.������һ��\n";
	cout << "\t\t\t\t0.�˳�\n";
	cout << "\t\t\t    ��������������:";
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
