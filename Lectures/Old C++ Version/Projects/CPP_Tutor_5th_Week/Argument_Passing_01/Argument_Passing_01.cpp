#include <iostream>

// �Լ� ����
int Factorial(int n);

int main() {
	// ���丮���� ���ϰ� ����� ����
	int result;
	result = Factorial(5);

	// ����� ���
	std::cout << "5!�� " << result << "�Դϴ�.\n";

	return 0;
}

int Factorial(int n) {
	// ����� ������ ������ �غ�
	int result = 1;

	// ���丮���� ����
	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	// ����� ��ȯ
	return result;
}