/*
List Initialization �б��ʼ��

�б����û�������������һ��Щ��ֵ
	Direct list initialization(ֱ���б��ʼ��)
	Copy list initialization(������ʼ��)
*/

#include<iostream>

int main_�б��ʼ��() {
	// ֱ���б��ʼ��
	int x{};// x is 0
	int y{ 1 };//y=1
	/*Array initialization*/
	int array1[]{ 1,2,3 };
	char s1[3]{ 'o','k' };
	char s3[]{ "Hello" };

	//�����б��ʼ��
	/*Variable initialization*/
	int z = { 2 };
	/*Array initialization*/
	int array2[] = { 4,5,6 };
	char s2[] = { 'y','e','s' };
	char s4[] = { "World" };
	char s5[] = "Alopa";//Omit curly braces(ʡ�Ի�����)

	// ����ʹ���б��ʼ������������һ���ܺõز�����������
	// �б��ʼ��������խ������������ʧ���ݾ��ȵ���ʽ����ת��
	return 0;
}