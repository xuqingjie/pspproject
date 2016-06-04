#pragma once
/*本模块用在user模块的功用部分*/
//定义类
#include"public.h"
#include<io.h>

class User_infor
{
	friend ostream& operator << (ostream& os, User_infor& user);
	friend istream& operator >> (istream& is, User_infor& user);
	friend int passwordcmp(User_infor user1, User_infor user2);
	/*friend char operator&=(char name[])
	{
		return *this;}
		*/

	//friend void comcpy(User_infor user1, User_infor user2);//完全复制类
public:
	void get_name();
	void get_password();
	
	void get_in_name();
	void get_id();
	char name[80];
	friend int compare(char passrepeat[], User_infor& user);
	friend int confirm(User_infor& user);
	//ostream& operator& << (ostream& os, User_infor& user);
private:
	char password[80];
	char in_name[80];
	char id;

};

//创建用户文件夹
//其中包括用户日志文件和日志检索文件
//传入的用户的名称，
//如果创建成功就返回1
//否则返回2
int create_user_file(char name[]);

/*
	函数功能：获取用户timerecordid存储位置
	时间 ： 6-4
	作者：徐庆杰
	描述：在用户登录之后用于获取用户timerecordid
	输入：username
	输出：无
	返回：当前id值
*/
void get_timerecord_id(char name[],char id_loc[]);

/*
函数功能：获取用户timerecord检索目录的存储位置
时间 ： 6-4
作者：徐庆杰
描述：在用户登录之后用于获取用户timerecord检索目录
输入：username
输出：无
返回：？
*/
void get_timerecord_index(char name[], char index_loc[]);









