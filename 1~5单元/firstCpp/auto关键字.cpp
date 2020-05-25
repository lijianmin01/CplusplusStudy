/* auto�ؼ���

��~C++03��auto��������֮ǰ
	�����Ĵ洢���ԣ��Զ�����
	��ʡ��
��C++11��������������ʱ����ݱ�����ʼֵ�������Զ�Ϊ�˱���ѡ��ƥ�������

	int a=10;
	auto au_a = a;//�Զ������ƶϣ�au_aΪint����
	cout<<typeid(au_a).name()<<endl;

auto ��ʹ�����ƣ�1��
	1��auto���������ڶ���ʱ��ʼ������������const�ؼ���
		auto a1=10;
		auto b1; // ���󣬱������޷��Ƶ�b1������
		b1 = 10;

	2��������һ��auto���еı�������ʼ���Ƶ���ͬһ����
		auto a4=10,a5{20};//��ȷ
		auto b4{10},b5=20.0;//����û���Ƶ�Ϊͬһ����
	
	3�������ʼ�����ʽ�����û�const����ȥ�����û�const����
		* auto����&��const
		int a{10};
		int &b=a;
		auto c=b;//c������Ϊint����int&(ȥ������)
		const int a1{10};
		auto b1=a1;//b1������Ϊint����const int����ȥconst��
	
	4�����auto�ؼ��ִ�����&�ţ���ȥ�����û�const����
		int a=10;int& b=a;
		auto& d=b;//��ʱd�����Ͳ�Ϊint&;

		const int a2=10;
		auto& b2=a2;//��Ϊauto������&,�ʲ�ȥ��const,b2����Ϊconst int
	
	5����ʼ�����ʽΪ����ʱ��auto�ؼ����Ƶ�����Ϊָ��
		int a3[3] = {1,2,3};
		auto b3=a3;
		cout << typeid(b3).name()<<endl; //���Ϊ int*()�����������й�)

	6�������ʽΪ����������auto����&�����Ƶ�����Ϊ��������
		int a7[3] ={1,2,3};
		auto& b7 = a7;
		cout << typeid(b7).name() << endl;//����� �������й�

	7��C++14�У�auto������Ϊ�����ķ���ֵ���ͺͲ�������

Why Almost Always Auto(Ϊ�ξ���ʹ��auto)
	Using auto are for correctness,performance(����)��maintainability(��ά����)��robustness(��׳��)and convenience
		��֤����������ʱ����ʼ��
	��int x = 3;���ܱ��auto��ʽ��
		auto x = int{3};//��ʼ���б�
		auto y = int{3.0};//����������
		auto z = int(3.0);//C���Ե�ǿ������ת����z��ֵ������3

	*/



#include<iostream>
#include<typeinfo>
using std::endl;
using std::cout;
using std::cin;

auto max(int x, int y) {
	return x > y ? x : y;
}
int main_auto�ؼ���() {
	/*int a = 10;
	auto au_a = a;
	cout << typeid(au_a).name() << endl;*/
	//int

	//�����ʼ�����ʽ�����û�const,��ȥ�����û�const����
	int y1{ 1 }, &y2{y1};
	auto y3{ y2 };
	cout << typeid(y3).name()<<endl;
	// int

	//���auto�ؼ��ִ�����&�ţ���ȥ�����û�const����
	
	//C++14�У�auto������Ϊ�����ķ���ֵ���ͺͲ�������
	auto x1{ 1 }, x2{ 2 };
	cout << max(x1, x2) << endl;
	//2
	return 0;
}