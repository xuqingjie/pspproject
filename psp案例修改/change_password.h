#pragma once
#include"user_public.h"
#include"public.h"
/*
修改用户密码模块；
本模块用于用户修改用户密码
本模块包括的函数	
	1)main_change_password();
	2)show_change_password();
	3)change_password();
另外 需要引用user_public的公共函数判断用户输入的账户密码是否正确
创建时间：2016-05-26
作    者：徐庆杰
修改历史：无
*/

//模块的主体函数
void main_change_password();
//函数的前半部分的显示函数
void show_change_password();
//函数用于修改用户密码
void change_password();