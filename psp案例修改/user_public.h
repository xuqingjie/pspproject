#pragma once
/*��ģ������userģ��Ĺ��ò���*/
//������
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

	//friend void comcpy(User_infor user1, User_infor user2);//��ȫ������
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

//�����û��ļ���
//���а����û���־�ļ�����־�����ļ�
//������û������ƣ�
//��������ɹ��ͷ���1
//���򷵻�2
int create_user_file(char name[]);

/*
	�������ܣ���ȡ�û�timerecordid�洢λ��
	ʱ�� �� 6-4
	���ߣ������
	���������û���¼֮�����ڻ�ȡ�û�timerecordid
	���룺username
	�������
	���أ���ǰidֵ
*/
void get_timerecord_id(char name[],char id_loc[]);

/*
�������ܣ���ȡ�û�timerecord����Ŀ¼�Ĵ洢λ��
ʱ�� �� 6-4
���ߣ������
���������û���¼֮�����ڻ�ȡ�û�timerecord����Ŀ¼
���룺username
�������
���أ���
*/
void get_timerecord_index(char name[], char index_loc[]);









