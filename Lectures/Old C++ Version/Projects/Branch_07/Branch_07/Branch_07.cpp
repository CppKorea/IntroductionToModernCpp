#include <iostream>

int main() {
	// ���� ���� : ������ �� ����
	int score = 5;

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
	default:
		std::cout << "�ùٸ��� ���� �����Դϴ�!!" << std::endl;
	}

	return 0;
}