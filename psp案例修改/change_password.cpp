#include"change_password.h"
#include"public.h"
//ģ������庯��
void main_change_password()
{
	show_change_password();
	change_password();
}
//������ǰ�벿�ֵ���ʾ����
void show_change_password()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ***********************�޸�����**************************\n";
	cout << "\t  *********************************************************\n";
}
//���������޸��û�����
void change_password()
{
	User_infor changeU;
	User_infor userWHV;
	char fileloc[100];
	char pw_repeat[100];
	strcpy_s(fileloc, location);
	//cout << fileloc;//
	strcat_s(fileloc, "\\userinfor\\");
	cout << "�������˺ţ�";
	changeU.get_name();
	if (confirm(changeU))
	{	//�����û����û��ļ�  1.1�汾֮�� ��Ҫ�ĳɹ��ú��� ���Խ�ʡ��������
		strcat_s(fileloc, changeU.name);
		fstream username(fileloc);
		

		ofstream output(fileloc,ios::in);
		//cout << fileloc;
		username >> userWHV;
		username.close();
		//cout << userWHV;
		fstream username1(fileloc);
		username1 >> changeU;
		username1.close();
		//cout << changeU;
		cout << "���������룺";
		changeU.get_password();
		//�Ƚ������Ƿ�һ��
		if (passwordcmp(userWHV, changeU))
		{
			cout << "�����֤�ɹ�����������Ҫ�޸ĵ�����";
			changeU.get_password();
			cout << "���ظ��������룺";
			cin >> pw_repeat;
			cout << userWHV;
			if (compare(pw_repeat, changeU))
			{
				output << changeU;
				cout << "���";
				output.close();
				getchar();
				getchar();
			}
			else
			{
				cout << "����������벻ͬ";
			}
		}
		else
		{
			cout << "�������";
			getchar();
			getchar();
		}
	}
	else 
	{
		cout << "�˺Ų�����";
		getchar();
		getchar();
	 }
}