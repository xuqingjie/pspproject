#ifndef _PUBLIC_H
#define _PUBLIC_H
#include<fstream>
#include<stdlib.h>
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

/*
ͷ�ļ����ƣ�                    ���������
��      �ܣ���ų������й�����ʹ�õ�һЩ����
ʱ      �䣺                       2016.4.29
��  ��  �ˣ�                          �����
��  ��  �ţ�                             1.1
�޸���ʷ��������

*/
/*���ò���*/
extern char location[80];

/*����ģ��*/
/*�˳�����
ʱ�䣺2015 6 4
���ߣ������
�������˳����������˳�ǰ�����ڴ��е����ݵ�Ӳ����
���룺��
���أ���

*/
int psp_exit(void);

/*
����������󱨸�ģ��
ʱ�� 2015 5
���ߣ������	
�������û�������������ʱ���û�������ʾ
���룺��
���������
*/
void error_worning();
//��ȡĿǰ�Ĵ洢λ�õĺ���
/*ʱ�䣺2015 6 4
���ߣ������
���������ڻ�ȡ�û����õĴ洢Ŀ¼�����Ҵ洢�ڱ���location��
���룺��
�������

*/
int get_loc(char location[]);

#define CMD_U 9              //���� ������һ��
#define CMD_EXIT 0			 //���� �˳�����
/*һ��ģ�� ��ʼ����*/
#define CMD_LOGIN 100        //���� ��½
#define CMD_USER_MAN 200	 //���� �û�����
#define CMD_SYS_MAN 300		 //���� ϵͳ����
/*
����ģ��
*/
//��½����
// �û�����ϵͳ
#define CMD_USER_MAN_CREATEU 210 //�����µ��û�
#define CMD_USER_MAN_DELETEU 220 //ɾ���û�
#define CMD_USER_MAN_CPD 230     //�޸��û����˺�����
#define CMD_USER_MAN_CINFO 240	 //�޸��û�����Ϣ
#define CMD_USER_MAN_SQUE 250	 //��ȫ����	
#define CMD_USER_MAN_UP 260 
//ϵͳ����
#define CMD_SYS_MAN_STORE 310		 //�޸��ļ��洢·��
#define CMD_SYS_MAN_UP 320			 //������һ��
//����ģ��
//��½��
#define CMD_LOGIN_MAINFUN_TIMERECORD 110	 //ʱ����־��¼	
#define CMD_LOGIN_MAINFUN_WEEKSUM 120		 //���ܽ�
#define CMD_LOGIN_MAINFUN_PROPLAN 130		 //��Ŀ�ƻ�

//���ز�����


#endif/*_PUBLIC_H*/

