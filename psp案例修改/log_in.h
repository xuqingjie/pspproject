#pragma once
/*
��ģ��Ϊ��½ģ���ͷ�ļ�
��½ģ������ĺ���Ϊ
 1)void main_login();	
 2)void show_login();	//��ʾ��½����Ĳ�������
 3)void getU_P();		//��ʾ��ȡ�û����˺������� ������Ӧ�ļ��
 4)void login_result(); //�Ե�½�Ľ�����з���
 5)int confirm_p();     //�ж��û�����������Ƿ�һ��
 �汾��1.1
 ��    �ߣ������
 �޸���ʷ��2016.5.13 ����ܴ���
*/
#include"public.h"
#include"user_public.h"
char user_file_location[120];

void main_login();
void show_login();	//��ʾ��½����Ĳ�������
void getU_P();		//��ʾ��ȡ�û����˺������� ������Ӧ�ļ��
void login_result(); //�Ե�½�Ľ�����з���P

//�¼�ģ��
void main_mainfun();
//���ڻ�ȡ��ǰ�û���	�ļ��洢λ��
void get_user_location(char username[]);