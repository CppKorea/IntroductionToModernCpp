#include <iostream>

int main() {
	// ! �������� ���
	bool b1, b2;
	b1 = !true;
	b2 = !false;

	// ��� ���
	std::cout << std::boolalpha;
	std::cout << "NOT true : " << b1 << std::endl;
	std::cout << "NOT false : " << b2 << std::endl;

	return 0;
}