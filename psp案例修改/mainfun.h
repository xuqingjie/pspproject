/*
登陆后的界面用于显示
此模块为登陆后的界面用于显示的头文件
作    者：徐庆杰
时    间：5.18
修改历史: 5.18创建
此模块包含的函数有
1）void main_mainfun();
2) void show_mainfun();
3) void cmdrecord_mainfun(int cmd_mainfun);
*/
#ifndef MAINFUN_H
#define MAINFUN_H
#include"public.h"
int cmd_mainfun;
//函数的主题部分
void main_mainfun();
//函数显示功能部分
//用户进入该部分后显示选项等内容
void show_mainfun();
//命令处理函数
//输入命令
//对命令进行处理并作出回应
void cmdrecord_mainfun(int cmd_mainfun);

//下级模块
void main_time_record();
#endif //MAINFUN_H 
