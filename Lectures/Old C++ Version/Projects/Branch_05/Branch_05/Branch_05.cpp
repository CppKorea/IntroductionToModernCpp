#include <iostream>

int main() {
	// ���� ���� : ������ �� ����
	int score = 2;

	// ������ ���� ������ �޽����� ���
	switch (score) {
	case 0:
		std::cout << "�з� ���̱���~" << std::endl;
		break;
	case 1:
		std::cout << "���� �� ����ϼ���~" << std::endl;
		break;
	case 2:
		std::cout << "��Ÿ���׿�~" << std::endl;
		break;
	case 3:
		std::cout << "���־��~" << std::endl;
		break;
	}

	return 0;
}