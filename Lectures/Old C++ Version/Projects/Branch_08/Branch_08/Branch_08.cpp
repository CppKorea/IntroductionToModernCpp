#include <iostream>

int main() {
	// ���� ���� : ������ �� ����
	int score = 1;

	// ������ ���� ������ �޽����� ���
	switch (score) {
	case 0:
	case 1:
	case 2:
		std::cout << "������ �ϼ���~" << std::endl;
		break;
	case 3:
		std::cout << "���־��~" << std::endl;
		break;
	default:
		std::cout << "�ùٸ��� ���� �����Դϴ�!!" << std::endl;
	}

	return 0;
}