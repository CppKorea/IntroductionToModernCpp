#include <iostream>

int main() {
	// 2 ~ 9�ܱ��� �ݺ���
	for (int i = 2; i <= 9; ++i) {
		// i���� ������ ǥ����
		std::cout << i << "�� ---------" << std::endl;
		
		// 1 ~ 9���� �ݺ���
		for (int j = 1; j <= 9; ++j) {
			std::cout << i << " * " << j << " = " << i * j << std::endl;
		}
	}

	return 0;
}