#include"user_public.h"


//ȷ�����ε������Ƿ�һ���Ƿ����
int compare(char passrepeat[], User_infor& user)
{
	return(!strcmp(passrepeat, user.password));
}

//���ز�����
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
//ȷ���û����Ƿ����
int confirm(User_infor& user)
{
	char userfn[60] = "userinfor\\";
	strcat_s(userfn, user.name);
	return (!_access(userfn, 00));
}
//�Ƚ����������Ƿ�һ��
int passwordcmp(User_infor user1, User_infor user2)
{
	return (!strcmp(user1.password, user2.password));
}
// ���Ա�����Ķ���
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
	//�����ļ���
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
	
	
	return 1;//���ûɶ���� �����ٸ�

	
}

/*
�������ܣ���ȡ�û�timerecordid�洢λ��
ʱ�� �� 6-4
���ߣ������
���������û���¼֮�����ڻ�ȡ�û�timerecordid
���룺username
�������
���أ���ǰidֵ
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
�������ܣ���ȡ�û�timerecord����Ŀ¼�Ĵ洢λ��
ʱ�� �� 6-4
���ߣ������
���������û���¼֮�����ڻ�ȡ�û�timerecord����Ŀ¼
���룺username
�������
���أ���
*/
void get_timerecord_index(char name[],char index_loc[])
{	

	strcpy_s(index_loc,120, location);
	strcat_s(index_loc,120, "\\user_files\\");
	strcat_s(index_loc,120, name);
	strcat_s(index_loc,120, "\\project\\index.dat");
}