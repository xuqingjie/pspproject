/*��ģ��ʵ�ִ����û��Ĺ���
�������¼���ģ��
1)void main_cre();
2)void show_cre();
3)void cre_user();
����Ϊuser��ı���user��
ʱ    �䣺2016-05-20
��    �ߣ������
�޸���ʷ��2015-5-20 ����� ����
*/

#include"user_man_create.h"

void main_cre()
{
	cre_user();
}

void show_cre()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ---------------------------ע��--------------------------\n";
	cout << "\t  *********************************************************\n";
}
void cre_user()
{
	char filename[80];
	char password_repeat[20];
	User_infor user;
	while (1)
	{
		show_cre();
		cout << "\n\n\n\t\t�����������˺ţ�";
		user.get_name();
	if (confirm(user))
	{
		cout << "\n\t\t�˻��Ѵ�������������\n";
		getchar();
		getchar();
		continue;
	}
	cout << "\n\t\t�������������룺";
	user.get_password();
	cout << "\n\t\t���ظ��������룺";
	cin >> password_repeat;
	
	if (compare(password_repeat, user))
	{
		cout << "\n\t\t����������������";
		user.get_in_name();
		user.get_id();
		strcpy_s(filename, location);
		strcat_s(filename, "\\userinfor\\");
		strcat_s(filename, user.name);
		//cout << filename;
		ofstream create(filename, ios::out);
		create << user;
		create_user_file(user.name);
		getchar();
		//getchar();
		break;
	}
	else
	{
		cout << "\n\t\t���������������������\n";
		getchar();
		getchar();
	}
	}
}