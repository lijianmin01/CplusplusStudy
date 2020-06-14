/*
展示如何后去磁盘空间信息的任务
使用filesystem::space()函数，获取某路径所在的分区的
space_info对象，然后显示磁盘分区信息
*/
#include<iostream>
#include<filesystem>
using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main_pathSpace() {

	//定义路径对象
	fs::path p{ "C:\\" };

	//展示磁盘的总大小和剩余大小
	cout << "C totla space: " << fs::space(p).capacity << endl;
	cout << "C free space: " << fs::space(p).free << endl;
	/*
	C totla space: 72770848800
	C free space:  45650862080
	*/
	return 0;
}



