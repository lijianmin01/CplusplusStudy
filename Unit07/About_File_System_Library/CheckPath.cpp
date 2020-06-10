#include<iostream>
#include<filesystem>
#include<string>

using std::cout;
using std::endl;

int main() {
	//�������
	namespace fs = std::filesystem;
	//����·����ʹ�����ַ�����ת���ַ�������б���ַ���
	fs::path p{ "Hello.txt" };
	//����·��
	fs::path p1{ "E:\\github\\CplusplusStudy\\Unit07\\About_File_System_Library\\Hello.txt" };
	//�������ַ�������ʽʥĸ·��
	fs::path p2{ R"(E:\github\CplusplusStudy\Unit07\About_File_System_Library\TODO.txt)" };
	//ʹ����б�� // -�� \



	//���Ĭ���ļ��ָ���
	cout <<"file separator is "<< fs::path::preferred_separator << endl;//92
	//�ж��Ƿ��ǳ����ļ�������ǣ�����ļ���С
	if (fs::is_regular_file(p2)) {
		cout <<p2<<"'s size is"<< fs::file_size(p2) << endl;
	}
	else if (fs::is_directory(p2)) {
		//�ж��Ƿ�ΪĿ¼�������Ŀ¼���г�����Ŀ¼
		cout << p << "is a directory, includes: " << endl;
		for (auto& e : fs::directory_iterator(p2)) {
			cout << " " << e.path()<<endl;
		}
	}
	else if (fs::exists(p2)) {
		//�ж�·���Ƿ����
		cout << p2 << " is a special file\n";
	}
	else {
		cout << p2 << " does not exist " << endl;
	}

	


	return 0;
}
