#include <iostream>

int main() {
	int i = 0;		// 1���� 10���� ������ ����
	int sum = 0;	// ��ü ���� ������ ����

	// '++i <= 10'�� �����ϴ� ���ȸ� �ݺ�
	while (++i <= 10) {
		// ��������� �տ� i�� ����
		sum += i;
	}

	// ��� ���
	std::cout << "���� i�� �� = " << i << std::endl;
	std::cout << "1 ~ 10������ �� = " << sum << std::endl;

	return 0;
}