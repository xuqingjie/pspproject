#pragma once
#include"public.h"
#include"main_public.h"
#include"user_public.h"

/*
��ģ��Ĺ���Ϊ�û����벢����ʱ����־��ģ��
��ģ������ĺ���Ϊ
	1��main_input_time();
	2) show_input_time();
	3��cmd_input_time();
�����ĳ���Ϊ
CMD_CREATE 111;
CMD_DELETE 112;
CMD_CHANGE 113;
*/

#define CMD_CREATE 111
#define CMD_DELETE 112
#define CMD_CHANGE 113
#define CMD_CHECK  114

int cmd_time_record=0;

void main_time_record();
void show_time_record();
void cmd_time_record_back(int cmd_time_record);
