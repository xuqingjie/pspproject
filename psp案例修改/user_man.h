#ifndef _USER_MAN_H
#define _USER_MAN_H
/*
�û��������
��ģ��������º���
	��1��void show_user_man();
	��2��void main_user_man();
    ��3��void cmd_record_user_man();
�汾��1.1
���ߣ������
�޸���ʷ��2016.5.2 ����ܴ���

*/
#include<fstream>
#include<iostream>
#include<cstdlib>
#include"public.h"
//��ʾ�û�����Ľ���
//�����û��Ľ�һ������
void show_user_man();
//�û�������������
void main_user_man();
//���û������������д���
void cmd_record_user_man(int cmd_user_man);
int cmd_user_man;
/*�¼�����*/
void main_cre();//�����û�
void main_delete();//ɾ���û�
void main_change_password();//�޸�����
#endif/*_USER_MAN_H*/

