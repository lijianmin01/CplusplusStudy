/*
չʾpath��ص�һЩ������������÷�
	/=  +=  /
*/

#include<iostream>
#include<filesystem>
#include<string>

using std::cout;
using std::endl;

namespace fs = std::filesystem;

int main_PathOperators() {
	//����·������
	fs::path p1{R"(T:\test)"};
	fs::path p2{ R"(T:\test)" };
	fs::path p3{ "" };
	//append �� +=
	p1.append(R"(users)");
	p1 /= R"(cyd)";

	cout << p1 << endl;

	//concat �� +=
	p2.concat(R"(users)");
	p2 += R"(cyd)";

	cout << p2 << endl;
	
	//������� / ƴ��һ����·��
	p3 = p3 / R"(C:\temp)" / R"(users)" / R"(cyd)";
	
	cout << p3 << endl;
	/*
	"T:\\test\\users\\cyd"
	"T:\\testuserscyd"
	"C:\\temp\\users\\cyd"
	*/
	return 0;
}