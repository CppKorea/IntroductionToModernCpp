#include <iostream>

int main() {
	// ��ü ���� ������ ����
	int sum = 0;

	int i = 1;

	// 1 ~ 10���� �ݺ��ϸ鼭 ����
	for (;;) {
		sum += i;	// ��������� �տ� i�� ����
		++i;		// i�� ������Ŵ

		// ������ ����
		if (i > 10)
			break;
	}

	// ��� ���
	std::cout << "1 ~ 10������ �� = " << sum << std::endl;

	return 0;
}