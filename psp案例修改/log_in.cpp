#include"log_in.h"
#include"public.h"
void main_login()
{
	show_login();
	getU_P();
}
void show_login()	//��ʾ��½����Ĳ�������
{
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  *************************��½****************************\n";
	cout << "\t  *********************************************************\n";
}
void getU_P()	//��ʾ��ȡ�û����˺������� ������Ӧ�ļ��
{
	User_infor inuser;
	cout << "\t\t\tUSER:";
	inuser.get_name();
	if (confirm(inuser))
	{
		get_user_location(inuser.name);
		//��ȡ����
		User_infor userloc;
		strcpy_s(userloc.name, "userinfor\\");
		strcat_s(userloc.name, inuser.name);
		//cout << userloc.name;
		ifstream g_u(userloc.name,ios::app);
		g_u >> userloc;
		//cout << userloc;
		//��������
		cout << "\t\t\tPASSWORD:";
		inuser.get_password();
		getchar();
		if (passwordcmp(inuser, userloc))
		{
			main_mainfun();
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
void login_result() //�Ե�½�Ľ�����з���
{
}
void get_user_location(char username[])
{
	strcpy_s(user_file_location, location);
	strcat_s(user_file_location,"\\user_files\\");
	strcat_s(user_file_location, username);

}