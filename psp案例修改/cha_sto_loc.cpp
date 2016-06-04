/*
此模块为修改储存位置模块的头文件
本模块包括以下四个函数
1)void main_cha();		//主要函数模块，用于容纳show get create 部分函数
2)void show_cha();		//用于显示用户界面
3)void get_infor();		//获取用户输入的地址信息
4)void create_files();  //创建文件
5)void confirm();							//确定是否确定修改
作    者：徐庆杰
时    间：5.19
修改历史：
2016.5.19 徐庆杰创建
版本号1.1
*/
#include"cha_sto_loc.h"
char location[80];
void main_cha()		//主要函数模块，用于容纳show get create 部分函数
{
	
	show_cha(sto_location);		//用于显示用户界面
					            //获取用户输入的地址信息
	confirm(sto_location);
}
void show_cha(char sto_location[])		//用于显示用户界面
{
	fflush(stdin);
	system("cls");
	cout << "\n\n\n\n";
	cout << "\t\t\t*************************\n";
	cout << "\t\t\t |个体程序设计 系统管理| \n";
	cout << "\t\t\t*************************\n";
	cout << "\n\n";
	cout << "\t\t\t 请输入您想设置的储存位置:\n\t\t\t";
	cin>>sto_location;
	//cout << sto_location;
	getchar();

}
//创建文件夹*/
void create_files(char sto_location[])  //创建文件夹*/
{
	cout << "part2" << endl;
	cout << sto_location;
	ofstream fout("config.txt", ios::out);
	fout << sto_location;
	fout.close();	
}

/*确定是否确定修改*/
void confirm(char sto_location[])
{
	int cmd;
	cout << "\t\t\t  确定修改吗？(1/0?)\n";
	cin >> cmd;
	if (cmd)
	{
		create_files(sto_location);
		over_suc();
		get_loc(location);
	}
	else
	{

		over_can();
	}
}



