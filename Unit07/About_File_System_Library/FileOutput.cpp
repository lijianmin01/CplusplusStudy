/*
1�������ļ������

2�����ļ�д������

3���ر��ļ�

4�����ı��༭�����ļ����Աȴ����������

*/


#include<fstream>
#include<iostream>
#include<filesystem>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main_fileOutput() {
	fs::path p{ "scores.txt" };
	//����һ�����������
	ofstream output{ p };


	double lileiScore{ 90.5 };
	int hanmeimeiScore{ 84 };
	//���ļ�д������
	output << "Lilei " << lileiScore << endl;
	output << "HanMeimei" << hanmeimeiScore << endl;

	output.close();

	//��ӡ�ļ���С
	cout << "size of " << p << "is : " << fs::file_size(p);
	return 0;
}
