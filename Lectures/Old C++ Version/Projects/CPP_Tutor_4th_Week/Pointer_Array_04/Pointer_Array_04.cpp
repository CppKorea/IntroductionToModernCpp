#include <iostream>

int main() {
	float f[5];

	if (f == &f[0]) {
		// �׻� �� ���� ����
		std::cout << "�迭�� �̸��� ù ��° ������ �ּ�!" << std::endl;
	}

	return 0;
}