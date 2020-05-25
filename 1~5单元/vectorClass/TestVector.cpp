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
	//��C++11���б��ʼ�� ����vector����words1
	std::vector<std::string> words1{ "Hello","World!","Welcome","To","C!" };

	PRINT(words1);

	//ɾ��words1�����һ��Ԫ��
	words1.erase(words1.end() - 1);
	PRINT(words1);
	//��wordsβ��׷��һ��Ԫ��
	words1.push_back("{/C++~");
	PRINT(words1);
	//�õ���������words1�������Ѵ���words2
	std::vector words2(words1.begin(), words1.end());
	PRINT(words2);

	//��words2�в���Ԫ��
	words2.insert(words2.begin(), "Hello");
	PRINT(words2);

	//�ÿ�������words3
	std::vector words3(words2);
	PRINT(words3);

	//�á����޸�words3��Ԫ��
	words3[3] = "Python";
	PRINT(words3);
	//����words4����ʼ��Ϊ�����ͬ��Ԫ��
	std::vector<std::string> words4(4, "C++");
	PRINT(words4);

	//words3 ��words4����
	words3.swap(words4);
	PRINT(words4);

	return 0;
}



