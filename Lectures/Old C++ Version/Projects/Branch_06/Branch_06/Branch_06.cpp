#include <iostream>

int main() {
	// ���� ���� : ������ �� ����
	int score = 2;

	// ������ ���� ������ �޽����� ���
	switch (score) {
	case 0:
		std::cout << "�з� ���̱���~" << std::endl;
	case 1:
		std::cout << "���� �� ����ϼ���~" << std::endl;
	case 2:
		std::cout << "��Ÿ���׿�~" << std::endl;
	case 3:
		std::cout << "���־��~" << std::endl;
	}

	return 0;
}