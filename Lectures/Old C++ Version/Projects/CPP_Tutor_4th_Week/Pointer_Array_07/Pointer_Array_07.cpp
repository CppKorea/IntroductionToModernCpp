#include <iostream>

int main() {
	// �迭 ����
	long lArray[20];

	// �����Ͱ� �� �迭�� ����Ű�� ����
	long (*p)[20] = &lArray;

	// �����͸� ���ؼ� �迭�� ���
	(*p)[3] = 300;

	// ����� Ȯ��
	std::cout << "lArray[3] = " << lArray[3] << std::endl;

	return 0;
}