/*
1����������һ����ĸ��س���������뻺������2���ַ�

2��ʹ��cin������Ϣ���л����ַ����ڻ��������Ӷ�������return���ǰ��cin.get()��������

*/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main_BufferedIO() {
	//�õ�cin����Ļ�����ָ��
	auto p = cin.rdbuf();

	// �Ӽ��̶����ַ�������ŮȨ�������ַ��ڻ�����
	auto x = cin.peek();

	cout << "x = " << x << endl;

	//��ʾ���������ַ�����
	auto size{ p->in_avail() };
	cout << "Ther are " << p->in_avail() << "characters in the buffer ." << endl;
	//�ѻ����� ���ַ���ȡ��������ʾ
	for (int i = 0; i < size; i++) {
		cout << i + 1 << " : " << cin.get() << endl;
	}
	return 0;
}