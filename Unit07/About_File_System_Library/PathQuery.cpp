#include<iostream>
#include<filesystem>
using std::cout;
using std::endl;

int main_query_path() {
	//���ֿռ����
	namespace fs = std::filesystem;
	//����·��P
	fs::path p{ R"(E:\github\CplusplusStudy\Unit07\About_File_System_Library\PathQuery.cpp)" };
	//�Ƿ���ڣ���������·�������·��
	if (p.empty()) {
		cout << "Path" << p << " is empty." << endl;
	}
	if (!fs::exists(p)) {
		cout << "Path " << p << "does not exist . " << endl;
	std:exit(0);//�˳������ִ��
	}

	cout << "Root_name(): " << p.root_name() << endl
		 << "Root_path(): " << p.root_path() << endl
		 << "Relative_path()" << p.relative_path() << endl;
	//��·�����ļ������ļ������ɣ���չ����
	cout << "paret_path() : " << p.parent_path() << endl
		<< "filename() : " << p.filename() << endl
		<< "stem() : " << p.stem() << endl
		<< "extension() : " << p.extension() << endl;
	/*
	Root_name(): "E:"
	Root_path(): "E:\\"
	Relative_path()"github\\CplusplusStudy\\Unit07\\About_File_System_Library\\PathQuery.cpp"
	paret_path() : "E:\\github\\CplusplusStudy\\Unit07\\About_File_System_Library"
	filename() : "PathQuery.cpp"
	stem() : "PathQuery"
	extension() : ".cpp"
	*/

	return 0;
}