#include <iostream>

int main() {
	// ��� ����� AND ���� ����
	bool b1, b2, b3, b4;
	b1 = false && false;
	b2 = false && true;
	b3 = true && false;
	b4 = true && true;

	// ����� ���
	std::cout << std::boolalpha;
	std::cout << "false AND false : " << b1 << std::endl;
	std::cout << "false AND true  : " << b2 << std::endl;
	std::cout << "true  AND false : " << b3 << std::endl;
	std::cout << "true  AND true  : " << b4 << std::endl;

	return 0;
}