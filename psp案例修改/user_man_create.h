#ifndef _USER_MAN_CREATE_H
#define _USER_MAN_CREATE_H
/*本模块实现创建用户的功能
	保函以下几个模块
		1)main_cre();
		2)show_cre();
		3)cre_user();
		4)confirm_user();确定用户名是否可用
	变量为user类的变量user；
	时    间：2016-05-20
	作    者：徐庆杰
	修改历史：2015-5-20 徐庆杰 创建
*/
#include<fstream>
#include<string.h>
#include"public.h"
#include"user_public.h"
using namespace std;
void main_cre();//模块的主题部分
void show_cre();//模块的显示部分
void cre_user();//模块的控制以及后台操作部分
//定义类用于储存用户名及密码以及其他信息
#endif /*_USER_MAN_CREATE_H*/