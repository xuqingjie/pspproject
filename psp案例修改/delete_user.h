#pragma once
/*
本模块为登陆模块的头文件
登陆模块包含的函数为
1)void main_login();
2)void show_login();	//显示登陆界面的部分主体
3)void getU_P();		//提示获取用户的账号与密码 并做相应的检测
4)void login_result(); //对登陆的结果进行反馈
5)int confirm_p();     //判断用户输入的密码是否一致
版本号1.1
作    者：徐庆杰
修改历史：2016.5.23 徐庆杰创建
*/
#include"public.h"
#include"user_public.h"
#include<windows.h>

void main_delete();
void show_delete();	//显示登陆界面的部分主体
void deleteU_P();		//提示获取用户的账号与密码 并做相应的检测
void login_result(); //对登陆的结果进行反馈P

					 //下级模块