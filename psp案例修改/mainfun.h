/*
��½��Ľ���������ʾ
��ģ��Ϊ��½��Ľ���������ʾ��ͷ�ļ�
��    �ߣ������
ʱ    �䣺5.18
�޸���ʷ: 5.18����
��ģ������ĺ�����
1��void main_mainfun();
2) void show_mainfun();
3) void cmdrecord_mainfun(int cmd_mainfun);
*/
#ifndef MAINFUN_H
#define MAINFUN_H
#include"public.h"
int cmd_mainfun;
//���������ⲿ��
void main_mainfun();
//������ʾ���ܲ���
//�û�����ò��ֺ���ʾѡ�������
void show_mainfun();
//�������
//��������
//��������д���������Ӧ
void cmdrecord_mainfun(int cmd_mainfun);

//�¼�ģ��
void main_time_record();
#endif //MAINFUN_H 
