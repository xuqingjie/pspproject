#ifndef _SYS_MAN_H
#define _SYS_MAN_H
/*
此模块为初始界面的头文件
作    者：徐庆杰
时    间：5.06
修改历史: 5.06创建
此模块包含的函数有
	1）void main_sys_man();
	2) void show_sys_man();
	3) void cmdrecord_sys_man(int cmd_sys_man);
版本号1.1
*/
#include<iostream>
#include<cstdlib>
#include"public.h"
//此函数是系统管理模块函数的主体部分用来容纳show函数和cmd处理函数
//不接受任何参数
void main_sys_man();
//此函数是初始界面函数的显示部分，用来显示用户界面的内容
void show_sys_man();
/*命令处理函数
输入命令
对命令进行处理并作出回应
*/
void cmd_record_sys_man(int cmd_sys_man);
int cmd_sys_man;
/*****************
系统管理二级模块
*****************/
void main_cha();
#endif/*_SYS_MAN_H*/


