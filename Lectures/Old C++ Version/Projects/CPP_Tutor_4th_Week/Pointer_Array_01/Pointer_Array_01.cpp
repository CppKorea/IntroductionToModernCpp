#include <iostream>

int main() {
	// �迭 ����
	int arrays[10];

	// �����Ͱ� arrays[5]�� ����Ű�� ����
	int* p = &arrays[5];

	// p�� ���� arrays[5]�� �ּҸ� ���
	std::cout << "p = " << p << std::endl;
	std::cout << "&arrays[5] = " << &arrays[5] << std::endl;

	// �����Ͱ� arrays[6]�� ����Ű�� ����
	p++;

	// p�� ���� arrays[6]�� �ּҸ� ���
	std::cout << "p = " << p << std::endl;
	std::cout << "&arrays[6] = " << &arrays[6] << std::endl;
	
	return 0;
}