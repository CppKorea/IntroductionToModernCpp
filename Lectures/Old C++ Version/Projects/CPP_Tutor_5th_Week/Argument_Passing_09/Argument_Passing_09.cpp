#include <iostream>

// ������ �迭�� ���ڷ� �޴� �Լ��� ����
void Using2DArray(int arr[][3]);

int main() {
	// ������ �迭�� �����ϰ� �ʱ�ȭ
	int array[5][3] = {
		{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}
	};

	// �迭�� �Ѱ���
	Using2DArray(array);

	return 0;
}

void Using2DArray(int arr[][3]) {
	// ��� ���Ҹ� ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\n";
		}
	}
}