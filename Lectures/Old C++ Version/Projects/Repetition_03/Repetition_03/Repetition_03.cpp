#include <iostream>

int main() {
	int i = 11;		// 10���� 1���� ������ ����
	int sum = 0;	// ��ü ���� ������ ����

	// '--i'�� �����ϴ� ���ȸ� �ݺ�
	while (--i) {
		// ��������� �տ� i�� ����
		sum += i;
	}

	// ��� ���
	std::cout << "���� i�� �� = " << i << std::endl;
	std::cout << "1 ~ 10������ �� = " << sum << std::endl;

	return 0;
}