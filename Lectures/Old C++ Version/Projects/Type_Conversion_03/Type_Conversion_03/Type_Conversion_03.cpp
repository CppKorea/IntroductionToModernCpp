#include <iostream>

int main() {
	// �پ��� Ÿ���� ���� ���
	int i = 65;
	float f = 66.89f;
	char c = 'C';

	// ��������� ����ȯ
	std::cout << "int i = " << i << "\n";
	std::cout << "(char)i = " << (char)i << "\n";
	std::cout << "(bool)i = " << (bool)i << "\n\n";

	std::cout << "float f = " << f << "\n";
	std::cout << "(int)f = " << (int)f << "\n\n";

	std::cout << "char c = " << c << "\n";
	std::cout << "(int)c = " << (int)c << "\n";
}