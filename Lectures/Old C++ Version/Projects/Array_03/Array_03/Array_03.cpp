#include <iostream>

int main() {
	// �迭�� �����ϸ鼭 �ʱ�ȭ��Ŵ
	int kor_scores[5] = {100, 88, 92, 40, 76};

	// �� ������ ���� ���
	for (int i = 0; i < 5; i++) {
		std::cout << i << " ��° ���� = " << kor_scores[i] << std::endl;
	}

	return 0;
}