#include <iostream>
#include <string>

int main() {
	// C ��Ÿ���� ���ڿ��� ����
	char cstyle[] = "Are you a string, too?";

	// string ��ü�� ����
	std::string cppstyle;

	// ��ȯ
	cppstyle = cstyle;

	// cppstyle�� ù ��° ���ڸ� �ٲ㺽
	cppstyle[0] = 'B';

	// �� ���ڿ��� ���
	std::cout << "cstyle = " << cstyle << "\n";
	std::cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}