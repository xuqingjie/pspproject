/*
��ģ�����ڳ�����˳�
��    �ߣ������
ʱ    �䣺2016.5.1
�汾��1.1
�޸���ʷ������
*/
#include<iostream>
#include<cstdlib>
#include"public.h"
using namespace std;
int psp_exit(void)
{
	system("cls");
	cout << "\n\n\n\n\t\t\t         ллʹ�ã�\n";
	fflush(stdin);
	getchar();
	getchar();
	exit(0);
}
void error_worning()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	  cout << "\t  **************�����д�������������ȷ����****************\n";
	  cout << "\t  *********************************************************\n";
	getchar();
	getchar();
}
//��ȡ�û������õĴ洢Ŀ¼
/*ʱ�䣺2015 6 4
  ���ߣ������
  ���������ڻ�ȡ�û����õĴ洢Ŀ¼�����Ҵ洢�ڱ���location��
  ���룺��
  �������

*/
int get_loc(char location[])
{
	ifstream file("E:\\C�����ļ�\\psp�����޸�\\x64\\Debug\\config.txt");
	file >> location;
	return 1;
}
