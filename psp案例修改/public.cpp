/*
该模块用于程序的退出
作    者：徐庆杰
时    间：2016.5.1
版本号1.1
修改历史：暂无
*/
#include<iostream>
#include<cstdlib>
#include"public.h"
using namespace std;
int psp_exit(void)
{
	system("cls");
	cout << "\n\n\n\n\t\t\t         谢谢使用！\n";
	fflush(stdin);
	getchar();
	getchar();
	exit(0);
}
void error_worning()
{
	system("cls");
	cout << "\n\n\n\n\t  *********************************************************\n";
	  cout << "\t  **************输入有错误，请您输入正确命令****************\n";
	  cout << "\t  *********************************************************\n";
	getchar();
	getchar();
}
//获取用户的设置的存储目录
/*时间：2015 6 4
  作者：徐庆杰
  描述：用于获取用户设置的存储目录，并且存储在变量location中
  输入：无
  输出：无

*/
int get_loc(char location[])
{
	ifstream file("E:\\C语言文件\\psp案例修改\\x64\\Debug\\config.txt");
	file >> location;
	return 1;
}
