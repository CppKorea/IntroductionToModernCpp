#include <iostream>

int main() {
	// ���迡 ����� ������ ����
	int target = 20;

	// ���۷��� ������ ����
	int& ref = target;

	// ������ ���
	std::cout << "ref    = " << ref << std::endl;
	std::cout << "target = " << target << std::endl;
	std::cout << "&ref    = " << &ref << std::endl;
	std::cout << "&target = " << &target << std::endl;

	// ref�� ���� �ٲ�
	ref = 100;

	// ������ ���
	std::cout << "ref    = " << ref << std::endl;
	std::cout << "target = " << target << std::endl;
	
	return 0;
}