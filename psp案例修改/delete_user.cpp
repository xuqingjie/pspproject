#include"delete_user.h"
#include<stdio.h>

/*
��ģ��Ϊɾ��ģ���ͷ�ļ�
��½ģ������ĺ���Ϊ
1)void main_login();
2)void show_login();	//��ʾ��½����Ĳ�������
3)void getU_P();		//��ʾ��ȡ�û����˺������� ������Ӧ�ļ��
4)void login_result(); //�Ե�½�Ľ�����з���
5)int confirm_p();     //�ж��û�����������Ƿ�һ��
�汾��1.1
��    �ߣ������
�޸���ʷ��2016.5.23 ����ܴ���
*/
void main_delete()
{
	show_delete();
	deleteU_P();
}
void show_delete()	//��ʾ��½����Ĳ�������
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  *************************ע��****************************\n";
	cout << "\t  *********************************************************\n";
}
void deleteU_P()	//��ʾ��ȡ�û����˺������� ������Ӧ�ļ��
{
	User_infor inuser;
	cout << "\t\t\tUSER:";
	inuser.get_name();
	if (confirm(inuser))
	{
		//��ȡ����
		char filename[100];
		char command[100]="del ";
		User_infor userloc;
		strcpy_s(userloc.name, "E:\\C�����ļ�\\psp�����޸�\\x64\\Debug\\userinfor\\");
		strcat_s(userloc.name, inuser.name);
		strcpy_s(filename, userloc.name);
		//cout << userloc.name;
		ifstream g_u(userloc.name, ios::app);
		g_u >> userloc;
		g_u.close();
		//cout << userloc;
		//��������
		cout << "\t\t\tPASSWORD:";
		inuser.get_password();
		//getchar();
		cout << filename;
		strcat_s(command, filename);
		getchar();
		getchar();
		if (passwordcmp(inuser, userloc))
		{
			cout << "password correct";
			errno = 0;
			cout << errno;
			cout<<(_unlink(filename));
			cout << errno;
			/*system(command);*/
			getchar();
			getchar();
		}
		else
		{
			cout << "\n\n\n\n\t  *********************************************************\n";
			cout << "\t  -----------------------���벻��ȷ------------------------\n";
			cout << "\t  *********************************************************\n";
			getchar();
			getchar();
		}

	}
	else
	{

		cout << "\n\n\n\n\t  *********************************************************\n";
		cout << "\t  -----------------------�˺Ų�����------------------------\n";
		cout << "\t  *********************************************************\n";
		getchar();
		getchar();
	}



}
/*void login_result() //�Ե�½�Ľ�����з���
{
}*/