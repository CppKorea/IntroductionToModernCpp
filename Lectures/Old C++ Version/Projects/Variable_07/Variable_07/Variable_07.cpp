#include <iostream>

int main() {
	// �� ���� ���� ���� �� �ʱ�ȭ
	int d = 1000, e = 2000;

	// ������ �� Ȯ��
	std::cout << "d = " << d << ", e = " << e << "\n";

	// e�� ���� �о d�� ����
	d = e;

	// ������ �� Ȯ��
	std::cout << "d = " << d << ", e = " << e << "\n";

	return 0;
}