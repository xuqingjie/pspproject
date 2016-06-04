#ifndef _PUBLIC_H
#define _PUBLIC_H
#include<fstream>
#include<stdlib.h>
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

/*
头文件名称：                    公共命令常量
功      能：存放程序运行过程中使用的一些常量
时      间：                       2016.4.29
编  码  人：                          徐庆杰
版  本  号：                             1.1
修改历史：：暂无

*/
/*公用参数*/
extern char location[80];

/*公用模块*/
/*退出函数
时间：2015 6 4
作者：徐庆杰
描述：退出函数，在退出前保存内存中的内容到硬盘中
输入：无
返回：无

*/
int psp_exit(void);

/*
输入命令错误报告模块
时间 2015 5
作者：徐庆杰	
描述：用户输入的命令错误时给用户给予提示
输入：无
输出：错误
*/
void error_worning();
//获取目前的存储位置的函数
/*时间：2015 6 4
作者：徐庆杰
描述：用于获取用户设置的存储目录，并且存储在变量location中
输入：无
输出：无

*/
int get_loc(char location[]);

#define CMD_U 9              //命令 返回上一层
#define CMD_EXIT 0			 //命令 退出程序
/*一级模块 初始界面*/
#define CMD_LOGIN 100        //命令 登陆
#define CMD_USER_MAN 200	 //命令 用户管理
#define CMD_SYS_MAN 300		 //命令 系统管理
/*
二级模块
*/
//登陆界面
// 用户管理系统
#define CMD_USER_MAN_CREATEU 210 //创建新的用户
#define CMD_USER_MAN_DELETEU 220 //删除用户
#define CMD_USER_MAN_CPD 230     //修改用户的账号密码
#define CMD_USER_MAN_CINFO 240	 //修改用户的信息
#define CMD_USER_MAN_SQUE 250	 //安全问题	
#define CMD_USER_MAN_UP 260 
//系统管理
#define CMD_SYS_MAN_STORE 310		 //修改文件存储路径
#define CMD_SYS_MAN_UP 320			 //返回上一层
//三级模块
//登陆后
#define CMD_LOGIN_MAINFUN_TIMERECORD 110	 //时间日志记录	
#define CMD_LOGIN_MAINFUN_WEEKSUM 120		 //周总结
#define CMD_LOGIN_MAINFUN_PROPLAN 130		 //项目计划

//重载操作符


#endif/*_PUBLIC_H*/

