/* Simplified Memory Model for C++
C++ �ļ��ڴ�ģ��
1��Stack��ջ��
	* �������Զ������ͷ�
2��Heap(��)  new/delete
	* һ���ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ������OS����
3��Global/Static(ȫ����/��̬��)
	* ȫ�ֱ����;�̬�����Ĵ洢�Ƿ���һ���
	* ���Լ���Ϊ
		* * ��������ȫ��/��̬�������ڴ˴�
		* * ��������ͷ�
4��Constant(������)
	* ���Լ����Ϊ���г���������һ��
	* ����������ݲ������޸�

* ������ַ��������
* ջ��͵�ַ��������

5�����ų���������ö��ֵ������ȫ����д�����»��߷ָ�����

const and pointers(������ָ��)

	ָ����ֵ��һ��ָ�볣��
		* ������ָ��ָ������ݲ�����ͨ��ָ��ļ�����ã�*p�����ı��
			const int x=1;
			const int* p1;
			p1 = &x; //ָ��p1�������ǣ�const int*��

			*p1 = 10;//error

			char * s1="hello"; //error
			const char* s2 = "hello";//correct
	
	Pointer Constant(ָ�볣��)
		* ָ�뱾��������Ǹ������������Ըı�
			int x = 1,y=1;
			int * const p2=&x;//����p2�������ǣ�int*��

			*p2=10;//OKAY -> x=10
			p2=&y; //Error p2 is a constant
		* ����������������׵�ַ�ı��������ڿ���˵������������һ��ָ�볣��

	Summary(�ܽ�)
		const int * x;
		int * const y;

		��ǰ�ȶ�����ǰ����
			* *��ָ�룩��const(����)˭��ǰ�ȶ�˭
			* * ����ָ�����ݣ����ִ���ָ���ַ
			* const��˭ǰ��˭�Ͳ�����ı�

��using ����typedef(C++11)
Syntax(�﷨)��using identifier = type-id
	//���ͱ�������ͬ��typedef unsigned int UInt;
	using UInt = unsigned int;
	//���ơ�UInt���ִ�����
	UInt x =42u;

	//���ͱ�������ͬ��typedef void(*FuncType)��int��int��;
	using FuncType = void (*)(int,int);
	//����"FuncType"�ִ�ָ������ָ��
	void example(int,int){}
	FuncType f = example;

	�������͵����ֱ���������ĸ��д����������ĸ��Сд���

����ģ��ı�����ֻ��ʹ��using

*/

#include<iostream>
using std::cout;
using std::endl;
int main_C�ļ��ڴ�ģ��() {

	// ��������
	const int x=42;
	// �������ɱ�
	//x = 20;
	// ����ָ����ָ�����ݲ��ɸı�
	int y = 2;
	const int* p = &x;
	//(*p) = 21;
	const int* q = &y;
	//(*q) = 4;
	// ָ�볣�����ɱ�
	int* const r = &y;
	int z = 5;
	//r = &z;
	*r = 20;
	cout << "(*r) = "<<*r << endl;
	cout << "y = " << y << endl;
	//(*r) = 20
	//y = 20

	// ��ָ�볣��
	const int* const s = &y;
	//s=&z;

	const char* str = "hello";
	//*str = 'p';

	auto p1 = &y;
	auto p2 = "World";
	auto const p3 = "!";

	return 0;
}



