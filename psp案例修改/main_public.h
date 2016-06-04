#pragma once
/*
此模块作为时间日志记录的公共部分 
主要实现的功能
1.定义公共类：时间日志记录 时间 记录名称 事件 时间id；
其他 想起来再说

作者：徐庆杰
时间：2016-5-30
修改历史：2016-5-30 创建

*/
#include"public.h"

//公共类的规定
struct Time
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
};

class Timerecord
{
public:
	char title[100];
	char incident[500];
	Time s_time;
	Time e_time;
	int id;
};


class index_file
{ 
	
public:
	Timerecord index_way;
	int id;
};

//变量名称的修改********************************************************
typedef Timerecord * TimerecordPtr;
//公共函数的规定********************************************************

/*
函数名称：事件日志记录的添加
作    者：徐庆杰
时    间：2016 6 4
功能描述：向内存中追加变量名称输入指针变量
输    入：时间日志记录型变量
输    出：？
返 回 值：时间日志记录的id
*/

