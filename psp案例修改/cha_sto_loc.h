#ifndef CHA_STO_LOC_H
#define CHA_STO_LOC_H
/*
此模块为修改储存位置模块的头文件
本模块包括以下四个函数
	1)void main_cha();							//主要函数模块，用于容纳show get create 部分函数
	2)void show_cha(char sto_location[]);		//用于显示用户界面
	3)void get_infor();							//获取用户输入的地址信息
	4)void create_files(char sto_location[]);	//创建文件夹
	5)void confirm();							//确定是否确定修改
	6)void over();								//程序结束后的界面
作    者：徐庆杰
时    间：5.19
修改历史：
2016.5.19 徐庆杰创建

版本号1.1
*/


#include<iostream>
#include<fstream>
#include<cstdlib>
#include"public.h"

/**part1-函数部分*/
void main_cha();
//此函数是初始界面函数的显示部分，用来显示用户界面的内容
//同时获取用户的输入
void show_cha(char sto_location[]);
/*
根据的得到的用户反馈创建文件夹
*/
void create_files(char sto_location[]);

/*确定是否确定修改*/
void confirm(char sto_location[]);

/*程序结束后的界面*/
void over_suc();	
void over_can();
char sto_location[80];

/*程序结束后的界面*/
void over_suc()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ************************修改成功*************************\n";
	cout << "\t  *********************************************************\n";

	getchar();
	getchar();
}
void over_can()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	cout << "\t  ************************取消成功*************************\n";
	cout << "\t  *********************************************************\n";

	getchar();
	getchar();
}
#endif /*CHA_STO_LOC_H*/
