#pragma once
/*
��ģ����Ϊʱ����־��¼�Ĺ������� 
��Ҫʵ�ֵĹ���
1.���幫���ࣺʱ����־��¼ ʱ�� ��¼���� �¼� ʱ��id��
���� ��������˵

���ߣ������
ʱ�䣺2016-5-30
�޸���ʷ��2016-5-30 ����

*/
#include"public.h"

//������Ĺ涨
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

//�������Ƶ��޸�********************************************************
typedef Timerecord * TimerecordPtr;
//���������Ĺ涨********************************************************

/*
�������ƣ��¼���־��¼�����
��    �ߣ������
ʱ    �䣺2016 6 4
�������������ڴ���׷�ӱ�����������ָ�����
��    �룺ʱ����־��¼�ͱ���
��    ������
�� �� ֵ��ʱ����־��¼��id
*/

