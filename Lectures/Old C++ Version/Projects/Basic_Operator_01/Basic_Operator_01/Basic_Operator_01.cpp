#include <iostream>

int main() {
	// ��꿡 ����� �� ����
	int a = 8;
	int b = 4;

	// ��Ģ ����
	int c = a + b;	// ����
	int d = a - b;	// ����
	int e = a * b;	// ����
	int f = a / b;	// ������

	// ������ ����
	int g = a % b;	// �������� ������

	// ��� ���
	std::cout << "8 + 4 = " << c << std::endl;
	std::cout << "8 - 4 = " << d << std::endl;
	std::cout << "8 * 4 = " << e << std::endl;
	std::cout << "8 / 4 = " << f << std::endl;
	std::cout << "8 % 4 = " << g << std::endl;

	return 0;
}