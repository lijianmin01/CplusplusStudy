#include<iostream>
#include<filesystem>
#include<string>

using std::cout;
using std::endl;

int main() {
	//定义别名
	namespace fs = std::filesystem;
	//定义路径，使用生字符串、转移字符串、正斜杠字符串
	fs::path p{ "Hello.txt" };
	//绝对路径
	fs::path p1{ "E:\\github\\CplusplusStudy\\Unit07\\About_File_System_Library\\Hello.txt" };
	//用声明字符串的形式圣母路径
	fs::path p2{ R"(E:\github\CplusplusStudy\Unit07\About_File_System_Library\TODO.txt)" };
	//使用生斜杠 // -》 \



	//输出默认文件分隔符
	cout <<"file separator is "<< fs::path::preferred_separator << endl;//92
	//判断是否是常规文件，如果是，输出文件大小
	if (fs::is_regular_file(p2)) {
		cout <<p2<<"'s size is"<< fs::file_size(p2) << endl;
	}
	else if (fs::is_directory(p2)) {
		//判断是否为目录，如果是目录，列出其子目录
		cout << p << "is a directory, includes: " << endl;
		for (auto& e : fs::directory_iterator(p2)) {
			cout << " " << e.path()<<endl;
		}
	}
	else if (fs::exists(p2)) {
		//判断路径是否存在
		cout << p2 << " is a special file\n";
	}
	else {
		cout << p2 << " does not exist " << endl;
	}

	


	return 0;
}
