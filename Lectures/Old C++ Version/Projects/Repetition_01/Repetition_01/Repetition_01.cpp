#include <iostream>

int main() {
	int i = 1;		// 1���� 10���� ������ ����
	int sum = 0;	// ��ü ���� ������ ����

	// 'i <= 10'�� �����ϴ� ���ȸ� �ݺ�
	while (i <= 10) {
		// ��������� �տ� i�� ����
		sum += i;

		// i�� 1�� ����
		++i;
	}

	// ��� ���
	std::cout << "���� i�� �� = " << i << std::endl;
	std::cout << "1 ~ 10������ �� = " << sum << std::endl;

	return 0;
}