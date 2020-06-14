/*
1、创建文件输出流

2、向文件写入数据

3、关闭文件

4、用文本编辑器打开文件，对比代码语句检查结果

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
	//定义一个流输出对象
	ofstream output{ p };


	double lileiScore{ 90.5 };
	int hanmeimeiScore{ 84 };
	//向文件写入数据
	output << "Lilei " << lileiScore << endl;
	output << "HanMeimei" << hanmeimeiScore << endl;

	output.close();

	//打印文件大小
	cout << "size of " << p << "is : " << fs::file_size(p);
	return 0;
}
