#include <iostream>

// 2������ �ڸ� �� �ϳ��� ���ϴ� ��� �Լ�
void Convert2Bin(int dec) {
	// 10������ 0���� �۰ų� ������ ����
	if (dec <= 0) {
		return;
	}

	// ���ڸ� 2�� ���� ���� ���ڷ� �ٽ� ȣ��
	Convert2Bin(dec / 2);

	// ���ڸ� 2�� ���� �������� ���
	std::cout << dec % 2;
}

int main() {
	// 13�� �������� ��ȯ
	Convert2Bin(13);

	std::cout << "\n";

	return 0;
}