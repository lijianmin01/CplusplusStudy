/*
���ļ�
	1�������ļ�����������score.txt
	2����>>���ļ���������

ʹ��fail()��������ļ��Ƿ��

�����ļ�������ѭ����ʹ��eof������Ϊѭ������

�ر��ļ�
*/
#include<fstream>
#include<iostream>
#include<filesystem>
#include<string>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;

namespace fs = std::filesystem;

int main() {
	fs::path p{ "scores.txt" };

	ifstream input{ p };

	//�ж��ļ��Ƿ����
	if (input.fail()) {
		cout << "Can't open file " << p << endl;
		return 0;
	}

	string name{ "" };
	double score{ 0.0 };

	//input >> name >> score;
	//cout << name << " " << score<<endl;
	//input >> name >> score;
	//cout << name << " " << score<<endl;

	//ѭ����ȡ
	char x;
	while (!input.get(x).eof()) {
		cout << x;
	}
	return 0;
}
