#include <iostream>
#include <string>

int main() {
	// C ��Ÿ���� ���ڿ��� ����
	char cstyle[] = "Are you a string, too?";

	// string ��ü�� ����
	std::string cppstyle;

	// ��ȯ
	cppstyle = cstyle;

	// �� ���ڿ��� ���
	std::cout << "cstyle = " << cstyle << "\n";
	std::cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}