#include <iostream>

int main() {
	// a, b�� ������ ���� ����
	int a = 3;
	int b = 5;
	int c;

	// a, b �� ū ���� c�� ����
	c = a > b ? a : b;

	// ��� ���
	std::cout << "c = " << c << std::endl;

	return 0;
}