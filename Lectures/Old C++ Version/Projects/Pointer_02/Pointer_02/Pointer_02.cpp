#include <iostream>

int main() {
	// �Ϲ����� ������ ����
	int a = 123;

	// ������ ������ ����
	int* p;

	// p�� a�� ����Ű�� ����
	p = &a;

	// ���� ������ ���
	std::cout << "&a = " << &a << std::endl;
	std::cout << "p = " << p << std::endl;
	std::cout << "&p = " << &p << std::endl;

	return 0;
}