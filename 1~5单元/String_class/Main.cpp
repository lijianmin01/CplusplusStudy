#include<iostream>
using std::string;
using std::cout;
using std::endl;
#include <string>
using std::array;
#include<array>
void print(array<int, 4>& a);
//��дsearch�������������в���һ��ֵ
int search(array<int, 4>& a, int token)
{
	bool exist{ false };
	int i = 0;
	for (auto element : a)
	{
		if (element == token) {
			exist = true;
			break;
		}
		i++;
	}
	if (exist) {
		return i;
	}
	else {
		return -1;
	}
}
int main() {
	//string s1{"Welcome"};
	//cout << s1.substr(0, 1) << endl;
	//cout << s1.substr(3) << endl;
	//cout << s1.substr(3, 3) << endl;
	//W
	//come
	//com

	//string s1 = "ABC";
	//string s2 = s1;
	//for (int i = s2.size() - 1; i >= 0; i--) {
	//	cout << s2[i];
	//}
	////CBA
	//cout << endl;
	//string s3 = s1 + "DEFG";
	//cout << s3 << endl;
	////ABCDEFG

	//s1 += "ABC";
	//s2 = "ABE";

	//cout << (s1 == s2) << endl;
	//cout << (s1 != s2) << endl;//1
	//cout << (s1 > s2) << endl;
	//cout << (s1 >= s2) << endl;
	//cout << (s1 < s2) << endl;//1
	//cout << (s1 <= s2) << endl;//1

	////�ܽ�
	////�����ַ���
	//string s = "Hello";
	//string s1{ "Hello" };
	//cout << s << endl;
	////clear
	//s.clear();
	//cout << s << endl;
	////������Ϊ�ַ�����ֵ
	//char arr[]{ 'W','o','r','l','d' };
	//s += arr;
	//cout << s << endl;
	////assign() ���¸�ֵ
	//s.assign("Hello World");
	//cout << s << endl;
	////append
	//s.append("	");
	////s.append(5, " ");
	////s.append("!");
	//cout << s << endl;
	////insert �հ�
	//s.insert(0, "	");
	//cout << s << endl;
	////�Ƴ��ַ���ǰ��Ŀհ�
	//s.erase(0, s.find_first_not_of("\t\n\r"));
	//cout <<"�Ƴ��ַ���ǰ��Ŀհ�: "<< s << endl;

	//cout << s << endl;
	////�Ƴ��ַ�������Ŀհ�
	//s.erase(s.find_last_not_of("\t\n\r")+1);
	//s.append("!");
	//cout << "�Ƴ��ַ�������Ŀհ�: " << s << endl;
	//
	////���ַ���ת��Ϊ�����򸡵���
	//s.assign("1024");
	//cout << s << endl;

	//int x = stoi(s);

	//string s2 = std::to_string(x);
	//cout << s2 + "~";
	//return 0;


	//�������ʹ��
	array a1 { 1,2,3,4 };
	print(a1);
	//��������
	a1 = { 6,7,8,9 };
	print(a1);
	//Ϊ���鸳ֵ
	array b1{ 100,200,300,40 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);
	//��������

	//�������С
	cout << a1.size() << endl;
	//��дsearch�������������в���һ��ֵ
	cout <<"serch 2000 : "<< search(a1, 2000) << endl;
	cout << "serch 200 : " << search(a1, 200) << endl;
	//sort
	std::sort(b1.rbegin(), b1.rend());
	print(b1);
	//��ά����
	array<array<int,3>, 4>a8;

	return 0;
}

//��ӡ����
void print(array<int ,4>& a) {
	for (auto x : a) {
		cout << x << "  ";
	}
	cout << endl;
}