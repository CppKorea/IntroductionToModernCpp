#include <iostream>

// 3�� ��ȯ�ϴ� �Լ�
int Three() {
	return 3;
}

int main() {
	// ��ȯ ���� ���� ����
	int ret;

	// �Լ��� ȣ���ϰ� ��ȯ ���� ����
	ret = Three();

	// ��� ���
	std::cout << "ret = " << ret << "\n";

	return 0;
}