#ifndef _USER_MAN_H
#define _USER_MAN_H
/*
用户管理界面
此模块包括以下函数
	（1）void show_user_man();
	（2）void main_user_man();
    （3）void cmd_record_user_man();
版本号1.1
作者：徐庆杰
修改历史：2016.5.2 徐庆杰创建

*/
#include<fstream>
#include<iostream>
#include<cstdlib>
#include"public.h"
//显示用户管理的界面
//引导用户的进一步操作
void show_user_man();
//用户管理函数的主体
void main_user_man();
//对用户输入的命令进行处理
void cmd_record_user_man(int cmd_user_man);
int cmd_user_man;
/*下级函数*/
void main_cre();//创建用户
void main_delete();//删除用户
void main_change_password();//修改密码
#endif/*_USER_MAN_H*/

