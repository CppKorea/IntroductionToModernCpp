#include <iostream>
#include <string>

int main() {
	// string ��ü�� ����
	std::string cppstyle = "Yes, I am.";

	// C ��Ÿ�� ���ڿ��� ���� ������ �غ�
	char* cstyle = new char[cppstyle.size() + 1];

	// C ��Ÿ�� ���ڿ��� �� ����
	strcpy(cstyle, cppstyle.c_str());

	// cstyle�� ù ��° ���ڸ� �ٲ㺽
	cstyle[0] = 'Z';

	// �� ���ڿ��� ���
	std::cout << "cstyle = " << cstyle << "\n";
	std::cout << "cppstyle = " << cppstyle << "\n";

	// �޸𸮸� ����
	delete[] cstyle;
	cstyle = NULL;

	return 0;
}