#pragma once
#include"public.h"
#include"main_public.h"
#include"user_public.h"

/*
本模块的功能为用户输入并储存时间日志的模块
本模块包含的函数为
	1）main_input_time();
	2) show_input_time();
	3）cmd_input_time();
包含的常量为
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
