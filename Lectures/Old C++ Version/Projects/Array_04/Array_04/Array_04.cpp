#include <iostream>

int main() {
	// �� ���� �迭 ����
	int arrayA[3] = {1, 2, 3};
	int arrayB[3];

	// arrayA�� ������ arrayB�� ����
	for (int i = 0; i < 3; i++) {
		arrayB[i] = arrayA[i];
	}

	// �� ������ ���� ���
	for (int i = 0; i < 3; i++) {
		std::cout << "arrayA[" << i << "] = " << arrayA[i] << ", arrayB[" << i << "] = " << arrayB[i] << std::endl;
	}

	return 0;
}