#include <iostream>
#include <string>

int main() {
	// string ��ü�� ����
	std::string cppstyle = "Yes, I am.";

	// C ��Ÿ�� ���ڿ��� ����ų �����͸� �غ�
	const char* cstyle = NULL;

	// C ��Ÿ�� ���ڿ��� ����
	cstyle = cppstyle.c_str();

	// �� ���ڿ��� ���
	std::cout << "cstyle = " << cstyle << "\n";
	std::cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}