#include <iostream>

int main() {
	// p�� a�� ����Ű�� ����
	int a = 123;
	int* p = &a;

	// p�� ����Ű�� ������ ���� ����
	std::cout << "*p = " << *p << std::endl;

	// p�� ����Ű�� ������ ���� ����
	*p = 789;

	// ���� ������ ���
	std::cout << "a = " << a << std::endl;
	std::cout << "*p = " << *p << std::endl;

	return 0;
}