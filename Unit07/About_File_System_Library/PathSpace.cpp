/*
չʾ��κ�ȥ���̿ռ���Ϣ������
ʹ��filesystem::space()��������ȡĳ·�����ڵķ�����
space_info����Ȼ����ʾ���̷�����Ϣ
*/
#include<iostream>
#include<filesystem>
using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main_pathSpace() {

	//����·������
	fs::path p{ "C:\\" };

	//չʾ���̵��ܴ�С��ʣ���С
	cout << "C totla space: " << fs::space(p).capacity << endl;
	cout << "C free space: " << fs::space(p).free << endl;
	/*
	C totla space: 72770848800
	C free space:  45650862080
	*/
	return 0;
}



