#include"user_man.h"
/*
��    �ߣ������
ʱ    �䣺2016.5.6
�޸���ʷ��
2016.5.6 ����� ����
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
	cout << "\t\t\t |���������� �û�����| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t    ��ģ�������¹���:\n";
	cout << "\t\t\t\t1.ע���û�\n";
	cout << "\t\t\t\t2.ע���û�\n";
	cout << "\t\t\t\t3.�޸��û�����\n";
	cout << "\t\t\t\t4.�һ�����\n";
	cout << "\t\t\t\t5.�û���ȫ�����趨\n";
	cout << "\t\t\t\t6.������һ��\n";
	cout << "\t\t\t\t0.�˳�\n";
	cout << "\t\t\t    ��������������:";
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
