#ifndef _SYS_MAN_H
#define _SYS_MAN_H
/*
��ģ��Ϊ��ʼ�����ͷ�ļ�
��    �ߣ������
ʱ    �䣺5.06
�޸���ʷ: 5.06����
��ģ������ĺ�����
	1��void main_sys_man();
	2) void show_sys_man();
	3) void cmdrecord_sys_man(int cmd_sys_man);
�汾��1.1
*/
#include<iostream>
#include<cstdlib>
#include"public.h"
//�˺�����ϵͳ����ģ�麯�������岿����������show������cmd������
//�������κβ���
void main_sys_man();
//�˺����ǳ�ʼ���溯������ʾ���֣�������ʾ�û����������
void show_sys_man();
/*�������
��������
��������д���������Ӧ
*/
void cmd_record_sys_man(int cmd_sys_man);
int cmd_sys_man;
/*****************
ϵͳ�������ģ��
*****************/
void main_cha();
#endif/*_SYS_MAN_H*/


