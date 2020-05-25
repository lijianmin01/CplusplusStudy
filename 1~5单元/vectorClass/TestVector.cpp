#include<vector>
#include<iostream>
#include<string>
using std::cout;
using std::endl;

//#include"Helper.h"

void PRINT(std::vector<std::string> list) {
	for (auto array : list) {
		std::cout << array << " ";
	}
	cout << endl;
}

int main_vector() {
	//用C++11的列表初始化 创建vector对象words1
	std::vector<std::string> words1{ "Hello","World!","Welcome","To","C!" };

	PRINT(words1);

	//删除words1的最后一个元素
	words1.erase(words1.end() - 1);
	PRINT(words1);
	//在words尾部追加一个元素
	words1.push_back("{/C++~");
	PRINT(words1);
	//用迭代器拷贝words1的内容已创建words2
	std::vector words2(words1.begin(), words1.end());
	PRINT(words2);

	//在words2中插入元素
	words2.insert(words2.begin(), "Hello");
	PRINT(words2);

	//用拷贝创建words3
	std::vector words3(words2);
	PRINT(words3);

	//用【】修改words3的元素
	words3[3] = "Python";
	PRINT(words3);
	//创建words4，初始化为多个相同的元素
	std::vector<std::string> words4(4, "C++");
	PRINT(words4);

	//words3 与words4交换
	words3.swap(words4);
	PRINT(words4);

	return 0;
}



