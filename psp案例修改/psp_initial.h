#ifndef _PSP_INITIAL_H
#define _PSP_INITIAL_H
/*
此模块为初始界面的头文件
作    者：徐庆杰
时    间：4.30
修改历史：
5.18 
加入void main_login()函数

版本号1.1
*/
#include<iostream>
#include<cstdlib>
#include"public.h"
//#include"sys_man.h"
//此函数是初始界面函数的主体部分用来容纳show函数和cmd处理函数
//不接受任何参数
void initialmain();
//此函数是初始界面函数的显示部分，用来显示用户界面的内容
void show_initial();
/*命令处理函数
输入命令
对命令进行处理并作出回应
*/
void cmd_record_initial(int initial_cmd);
int cmd_initial;
/*****************
用户管理二级模块
*****************/
//用户管理界面
void main_user_man();
void main_sys_man();
void main_mainfun();
void main_login();
#endif/*_PSP_INITIAL_H*/


