/*
读文件
	1、创建文件输入流，打开score.txt
	2、用>>从文件读入数据

使用fail()函数检测文件是否打开

将度文件语句放入循环，使用eof（）作为循环条件

关闭文件
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

	//判断文件是否存在
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

	//循环读取
	char x;
	while (!input.get(x).eof()) {
		cout << x;
	}
	return 0;
}
