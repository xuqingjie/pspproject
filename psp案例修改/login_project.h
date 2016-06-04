#ifndef LOGIN_PROJECT_H
#define LOGIN_PROJECT_H
/*
项目计划头文件
此模块包括以下函数
（1）void show_login_project();
（2）void main_login_project();
（3）void cmd_record_login_project();
版本号1.1
作    者：徐庆杰
修改历史：2016.5.13 徐庆杰创建

*/
#include<iostream>
#include<cstdlib>
#include"public.h"
//显示用户管理的界面
//引导用户的进一步操作
void show_login_project();

//用户管理函数的主体
void main_login_project();

//对用户输入的命令进行处理
void cmd_record_login_project(int cmd_login_project);
int cmd_login_project;





#endif/*LOGIN_PROJECT_H*/
