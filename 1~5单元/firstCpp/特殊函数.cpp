/*Overloading Functions (���غ���)

���������ƥ�����غ�������
-�������� �����������͡�˳��

�������
	ĳ���������ж��ƥ������������޷�ȷ����ȷ����
	������ûᵼ�±������

Default Arguments(����Ĭ�ϲ���)
	����������Ĭ�ϲ���ֵ�ĺ���
	�޲ε��ú����ǣ�Ĭ��ֵ�ᱻ���ݸ���ʽ����

	����ʱ��Ҫע�⣺
		�����б���Ĭ��ֵ����Ӧ����

	����ʱ��ע�⣺
		�����б���ʵ��Ӧǰ��

	��������ʱ���������ض���Ĭ�ϲ���

Inline Functions(��������)

	Declaration(������������)
	inline int max(int a,int b){
		return (a > b ?a:b);
	}

	Calling(������������)
	int x = max(3,5);
	int y = max(0,5);

	Inline expansion(������չ��)
	int x =(3 > 5 ?3:5);

	���������������Ͷ���һ�㲻�ֿ�

Restrictions for inline function(����������ʹ������)
	Desire for short functions(������ƽ�����õĶκ���)
	��ʹ�öദ���õĳ�����

���������ı������

���ڷ�Χ��forѭ�����﷨
	for ��Ԫ�������������弯�ϣ�{ѭ����}
		��Ԫ�����������������������ͣ��Ա�ֱ���޸ļ���Ԫ�ص�ֵ
		��Ԫ����������Ҳ������const���ͣ�����ѭ�����޸�Ԫ�ص�ֵ
		���С����弯�ϡ���ʹ��Range(��Χ)������һЩԪ����ɵ�һ������

	�����弯�ϡ�������
		auto a1[]{1,3,5,7};
		std::array<int,4>a2{2,4,6,8};
		std::vector<int>v={}42,7,5};//����
		std::vector<std::string>s{"Hello","World","!"};

if statement with an initializer(���г�ʼ������if���)
	
		if(auto x=f00(42);x>40){
			//do something with x
		}else{
			//do something with x
		}
*/

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int i = 100;

//int max(int x, int y) {
//	return x > y ? x : y;
//}
//
//int max(int a, int b, int c) {
//	return max(a, max(b, c));
//}

/*ģ������*/
template<typename T>
auto max(T x, T y) {
	return x > y ? x : y;
}

template<typename T>
auto max(T a, T b, T c) {
	return max(a, max(b, c));
}

int main() {
	
	//Variable Scope
	//int i{ 100 };
	/*for (int i = 1; i < 5; i++) {
		cout << std::to_string(i) + " "<<endl;
		cout << :: i << endl;
	}*/
		//1
		//100
		//2
		//100
		//3
		//100
		//4
		//100

	/**/
	//Overloading Function
	//cout << max(1, 2, 3);//3

	/*cout << max(1, 2, 3)<<endl;
	cout << max(9.9, 10.3, 6.2)<<endl;*/

	//3
	//10.3

	//Default Argument

	/*
	���ڷ�Χ��forѭ���ĺ���
		�Ӽ�����ȡ��ĳ��Ԫ��
		��֤����Ԫ�ض�������
	*/
	//�����ɰ�����a��Ԫ�ض��������Ļ�ϣ�Ȼ��������Ԫ�ط���
	//int a[] = { 2,1,4,3,5 };
	//for (auto i : a) {
	//	cout << i << endl;
	//}
	//cout << endl;
	//for (auto& i : a) {
	//	i = 2 * i;
	//}
	//cout << endl;
	//for (auto i : a) {
	//	cout << i << endl;
	//}
	/*
	2
	1
	4
	3
	5


	4
	2
	8
	6
	10
	*/

	/* �´�С
	�����������һ��0~100�������
	�û���һ���������������
	�����ж��û�����������Ĵ�С����ʾ�û� �´���/��С��/������
	*/
	//cout << "��������0~100֮�������.....\n";
	//cout << "��������²��������";
	//auto x{ 0 };//int x=0;
	//cin >> x;
	////���������
	////rand();<cstdlib>
	//if (int z = rand() % 100; z > x) {
	//	cout << "���С�ˣ����ɵ����ǣ�" << z << endl;
	//}else if (z < x) {
	//	cout << "��´��ˣ����ɵ����ǣ�" << z << endl;
	//}else {
	//	cout << "��ϲ�㣬�¶���\n";
	//}

	/*
	���ô��г�ʼ����switch��䣬���ٷ�֮�ɼ�ת���������
	[90,100]	A
	[80,89]		B
	[70,79]		C
	[60,69]		D
	[0,59]		E
	*/
	cout << "������γ̳ɼ�: ";
	int score = 0;
	cin >> score;
	//�ٷ���/10�����ô��г�ʼ������switch���Ľ���б�����Ƶȼ�
	cout << "��Ŀγ̳ɼ�Ϊ��";
	switch(int x = score / 10; x) {
	case 10:
	case 9:
		cout << "A\n";
		break;
	case 8:
		cout << "B\n";
		break;
	case 7:
		cout << "C\n";
		break;
	case 6:
		cout << "D\n";
		break;
	default:
		cout << "E\n";
	}
	return 0;
}



