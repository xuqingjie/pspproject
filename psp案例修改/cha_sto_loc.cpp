/*
��ģ��Ϊ�޸Ĵ���λ��ģ���ͷ�ļ�
��ģ����������ĸ�����
1)void main_cha();		//��Ҫ����ģ�飬��������show get create ���ֺ���
2)void show_cha();		//������ʾ�û�����
3)void get_infor();		//��ȡ�û�����ĵ�ַ��Ϣ
4)void create_files();  //�����ļ�
5)void confirm();							//ȷ���Ƿ�ȷ���޸�
��    �ߣ������
ʱ    �䣺5.19
�޸���ʷ��
2016.5.19 ����ܴ���
�汾��1.1
*/
#include"cha_sto_loc.h"
char location[80];
void main_cha()		//��Ҫ����ģ�飬��������show get create ���ֺ���
{
	
	show_cha(sto_location);		//������ʾ�û�����
					            //��ȡ�û�����ĵ�ַ��Ϣ
	confirm(sto_location);
}
void show_cha(char sto_location[])		//������ʾ�û�����
{
	fflush(stdin);
	system("cls");
	cout << "\n\n\n\n";
	cout << "\t\t\t*************************\n";
	cout << "\t\t\t |���������� ϵͳ����| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t �������������õĴ���λ��:\n\t\t\t";
	cin>>sto_location;
	//cout << sto_location;
	getchar();

}
//�����ļ���*/
void create_files(char sto_location[])  //�����ļ���*/
{
	cout << "part2" << endl;
	cout << sto_location;
	ofstream fout("config.txt", ios::out);
	fout << sto_location;
	fout.close();	
}

/*ȷ���Ƿ�ȷ���޸�*/
void confirm(char sto_location[])
{
	int cmd;
	cout << "\t\t\t  ȷ���޸���(1/0?)\n";
	cin >> cmd;
	if (cmd)
	{
		create_files(sto_location);
		over_suc();
		get_loc(location);
	}
	else
	{

		over_can();
	}
}



