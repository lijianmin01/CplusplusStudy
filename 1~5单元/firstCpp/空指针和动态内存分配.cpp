/*
nullptr and Dynamic Memory Allocation
nullptr �� ��̬�ڴ����

C++11 ���뱣���֡�nullptr�� ��Ϊ��ָ��
*/

#include<iostream>
using std::cout;
using std::endl;

void codeExample() {
	auto x{ 10 };
	int* p = nullptr;
	int* q{ nullptr };
	q = &x;
}
/*
Dynamic memory management: Allocate/Release(��̬�ڴ�Ĺ�������/�ͷ�)
	
C++ ��ͨ������� new ���붯̬�ڴ�
	new <������>����ֵ���� // ����һ�������ռ�
	new <������>[�������ʽ]�� // ��������
	 - �������ɹ�������ָ�����͵��ڴ�ĵ�ַ
	 - �������ʧ�ܣ��׳��쳣�����߷��ؿ�ָ�루nullptr��(C++)
��̬�ڴ�ʹ����Ϻ�Ҫ��delete��������ͷ�
	delete <ָ����>��//ɾ��һ������ָ��
	delete []<ָ����>�� //ɾ������ռ�

	char* s = new char('a');
	delete s;
	int* p = new int[10];
	delete[] p;

	*/
int main_nullptr() {
	int* p = nullptr;
	int* q{ nullptr }; //C++11	Initializer list

	p = new int(42);
	q = new int[4];
	cout << "Before: *p = " << *p << endl;
	*p = 24;
	cout << "After : *p = " << *p << endl;
	for (int i = 0; i < 4; i++) {
		cout << *(q + i) << endl;
	}

	/*
	Before: *p = 42
	After : *p = 24
	-842150451
	-842150451
	-842150451
	-842150451
	*/
	return 0;
}
