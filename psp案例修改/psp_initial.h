#ifndef _PSP_INITIAL_H
#define _PSP_INITIAL_H
/*
��ģ��Ϊ��ʼ�����ͷ�ļ�
��    �ߣ������
ʱ    �䣺4.30
�޸���ʷ��
5.18 
����void main_login()����

�汾��1.1
*/
#include<iostream>
#include<cstdlib>
#include"public.h"
//#include"sys_man.h"
//�˺����ǳ�ʼ���溯�������岿����������show������cmd������
//�������κβ���
void initialmain();
//�˺����ǳ�ʼ���溯������ʾ���֣�������ʾ�û����������
void show_initial();
/*�������
��������
��������д���������Ӧ
*/
void cmd_record_initial(int initial_cmd);
int cmd_initial;
/*****************
�û��������ģ��
*****************/
//�û��������
void main_user_man();
void main_sys_man();
void main_mainfun();
void main_login();
#endif/*_PSP_INITIAL_H*/


