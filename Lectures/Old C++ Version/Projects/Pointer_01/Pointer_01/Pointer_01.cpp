#include <iostream>

int main() {
	// ������ ����
	char c = 'B';
	int i = 19;
	float f = 4.5f;

	// �ּҸ� ���
	std::cout << "c�� �ּ� = " << (int*)&c << std::endl;
	std::cout << "i�� �ּ� = " << &i << std::endl;
	std::cout << "f�� �ּ� = " << &f << std::endl;

	return 0;
}