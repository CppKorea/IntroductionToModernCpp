#include <iostream>

int main() {
	int i = 1;		// 1���� 10���� ������ ����
	int sum = 0;	// ��ü ���� ������ ����

	// ������ �ݺ�
	while (true) {
		// ��������� �տ� i�� ����
		sum += i;

		// i�� 1�� ����
		++i;

		// i�� ���� �˻�
		if (i > 10)
			break;
	}

	// ��� ���
	std::cout << "���� i�� �� = " << i << std::endl;
	std::cout << "1 ~ 10������ �� = " << sum << std::endl;

	return 0;
}