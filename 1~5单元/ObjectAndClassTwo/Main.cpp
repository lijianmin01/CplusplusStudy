#include<iostream>
#include<array>
#include<cassert>
using std::cout;
using std::endl;
using std::array;

//Constexpr˵�������ڱ���ʱ���㺯���������ֵ
constexpr int max(int a, int b) {
	//c++14������constexpr�������з�֧ѭ����
	if (a > b) return a;
	else
	{
		return 0;
	}
}


int main_1() {
	//int m = 1;
	//const int rcm = m++; //rcm�������ڳ���
	//const int cm = 4;//�����ڳ������ȼ��ڣ�constexpr int cm=4;

	//int a1[max(m, rcm)];//����m&rcm���Ǳ����ڳ���

	//std::array<char, max(cm, 5)> a2;

	array a{ 1,2,3 };
	for (size_t i = 0; i <= a.size(); i++) {
		assert(i < 3);
		cout << a[i] << "	" << (i == a.size() ? "" : "") << endl;

	}
	return 0;
}

