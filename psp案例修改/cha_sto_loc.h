#ifndef CHA_STO_LOC_H
#define CHA_STO_LOC_H
/*
��ģ��Ϊ�޸Ĵ���λ��ģ���ͷ�ļ�
��ģ����������ĸ�����
	1)void main_cha();							//��Ҫ����ģ�飬��������show get create ���ֺ���
	2)void show_cha(char sto_location[]);		//������ʾ�û�����
	3)void get_infor();							//��ȡ�û�����ĵ�ַ��Ϣ
	4)void create_files(char sto_location[]);	//�����ļ���
	5)void confirm();							//ȷ���Ƿ�ȷ���޸�
	6)void over();								//���������Ľ���
��    �ߣ������
ʱ    �䣺5.19
�޸���ʷ��
2016.5.19 ����ܴ���

�汾��1.1
*/


#include<iostream>
#include<fstream>
#include<cstdlib>
#include"public.h"

/**part1-��������*/
void main_cha();
//�˺����ǳ�ʼ���溯������ʾ���֣�������ʾ�û����������
//ͬʱ��ȡ�û�������
void show_cha(char sto_location[]);
/*
���ݵĵõ����û����������ļ���
*/
void create_files(char sto_location[]);

/*ȷ���Ƿ�ȷ���޸�*/
void confirm(char sto_location[]);

/*���������Ľ���*/
void over_suc();	
void over_can();
char sto_location[80];

/*���������Ľ���*/
void over_suc()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ************************�޸ĳɹ�*************************\n";
	cout << "\t  *********************************************************\n";

	getchar();
	getchar();
}
void over_can()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ************************ȡ���ɹ�*************************\n";
	cout << "\t  *********************************************************\n";

	getchar();
	getchar();
}
#endif /*CHA_STO_LOC_H*/
