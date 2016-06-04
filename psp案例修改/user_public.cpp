#include"user_public.h"


//确定两次的密码是否一致是否存在
int compare(char passrepeat[], User_infor& user)
{
	return(!strcmp(passrepeat, user.password));
}

//重载操作符
ostream& operator << (ostream& os, User_infor& user)
{
	os << "User   name:" << user.name << endl
		<< "Pass   word:" << user.password << endl
		<< "Information:" << user.in_name << endl
		<< "I         D:" << user.id << endl;
	return os;
}

istream& operator >> (istream& is, User_infor& user)
{
	is.ignore(120,':');
	is >> user.name;
	is.ignore('\n');
	is.ignore(120,':');
	is >> user.password;
	is.ignore('\n');
	is.ignore(120,':');
	is >> user.in_name;
	is.ignore('\n');
	is.ignore(120,':');
	is >> user.id;
	is.ignore('\n');
	return is;
}

/*void comcpy(User_infor user1, User_infor user2)
{
	user1.name = user2.name;
}*/
//确定用户名是否存在
int confirm(User_infor& user)
{
	char userfn[60] = "userinfor\\";
	strcat_s(userfn, user.name);
	return (!_access(userfn, 00));
}
//比较两次密码是否一致
int passwordcmp(User_infor user1, User_infor user2)
{
	return (!strcmp(user1.password, user2.password));
}
// 类成员函数的定义
void User_infor::get_name()
{
	cin >> name;
}
void User_infor::get_password()
{
	cin >> password;
}
void User_infor::get_in_name()
{
	cin >> in_name;
}
void User_infor::get_id()
{
	ifstream old_id("user_id.txt", ios::in);
	old_id >> id;
	old_id.close();
	id++;
	ofstream new_id("user_id.txt");
	new_id << id;
	new_id.close();
}
int create_user_file(char name[])
{
	char location_file[100]="";
	char cmd[120] = "md ";

	char timerecord[120];
	char week[120];
	char project[120];	
	
	

	strcpy_s(location_file, location);
	strcat_s(location_file,"\\user_files\\");
	strcat_s(location_file, name);
	strcat_s(cmd, location_file);
	strcpy_s(timerecord,cmd);
	strcpy_s(week, cmd);
	strcpy_s(project, cmd);
	strcat_s(timerecord,"\\timerecord" );
	strcat_s(week, "\\week");
	strcat_s(project, "\\project");
	cout << project;
	//创建文件夹
	system(cmd);
	system(timerecord);
	system(week);
	system(project);

	
	char index_loc[120]="";
	char id_loc[120]="";
	get_timerecord_id(name, id_loc);
	get_timerecord_index(name, index_loc);
	ofstream index(index_loc);
	index << "\n";
	ofstream id(id_loc);
	id << "0";
	id.close();
	index.close();
	
	
	return 1;//这个没啥意义 改日再改

	
}

/*
函数功能：获取用户timerecordid存储位置
时间 ： 6-4
作者：徐庆杰
描述：在用户登录之后用于获取用户timerecordid
输入：username
输出：无
返回：当前id值
*/
void get_timerecord_id(char name[],char id_loc[])
{	
	char id_locn[120];
	strcpy_s(id_locn, location);
	strcat_s(id_locn, "\\user_files\\");
	strcat_s(id_locn, name);
	strcat_s(id_locn, "\\project\\id.dat");
	strcpy_s(id_loc,120, id_locn);
}

/*
函数功能：获取用户timerecord检索目录的存储位置
时间 ： 6-4
作者：徐庆杰
描述：在用户登录之后用于获取用户timerecord检索目录
输入：username
输出：无
返回：？
*/
void get_timerecord_index(char name[],char index_loc[])
{	

	strcpy_s(index_loc,120, location);
	strcat_s(index_loc,120, "\\user_files\\");
	strcat_s(index_loc,120, name);
	strcat_s(index_loc,120, "\\project\\index.dat");
}