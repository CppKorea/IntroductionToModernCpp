#include <iostream>

int main() {
	// ��ü ���� ������ ����
	int sum = 0;

	// 1 ~ 10���� �ݺ��ϸ鼭 ����
	for (int i = 1; i <= 10; ++i) {
		// i�� 5�� ���� �׳� �Ѿ
		if (i == 5)
			continue;

		// ��������� �տ� i�� ����
		sum += i;
	}

	// ��� ���
	std::cout << "1 ~ 4, 6 ~ 10 ������ �� = " << sum << std::endl;

	return 0;
}