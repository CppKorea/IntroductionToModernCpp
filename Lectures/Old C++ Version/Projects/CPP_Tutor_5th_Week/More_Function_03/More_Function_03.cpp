#include <iostream>

void WhilePositive(int n) {
	// ���ڸ� ���
	std::cout << "n = " << n << "\n";

	// ���ڰ� 0���� �۴ٸ� ��� ȣ���� ����
	if (n < 0) {
		return;
	}

	// �׷��� �ʴٸ� ����ؼ� ��� ȣ���� ��
	WhilePositive(n - 1);

	// ���ڸ� �� ���
	std::cout << "n = " << n << "\n";
}

int main() {
	// ��� �Լ��� ȣ��
	WhilePositive(10);

	return 0;
}