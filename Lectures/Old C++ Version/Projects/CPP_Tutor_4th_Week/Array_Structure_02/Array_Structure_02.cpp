#include <iostream>

// �л� ������ ���� ����ü
struct StudentInfo {
	char name[20];	// �̸�
	int stdNumber;	// �й�
	float grade[2];	// �ֱ� 2�б� ����
};

int main() {
	// 5���� �л� ������ ���� �迭�� ����� �л� ������ �ʱ�ȭ
	StudentInfo stdInfos[5] = {
		{"Kim Chol-Su", 200121233, {3.2f, 3.5f}},
		{"Lee Chol-Su", 200223517, {4.5f, 4.5f}},
		{"Park Chol-Su", 200321131, {1.7f, 2.0f}},
		{"Yang Chol-Su", 200222289, {0.4f, 4.1f}},
		{"Yoon Chol-Su", 199921444, {2.7f, 2.8f}}
	};

	// �л��� ������ ���
	for (int i = 0; i < 5; i++) {
		std::cout << stdInfos[i].name << std::endl;
		std::cout << stdInfos[i].stdNumber << std::endl;
		std::cout << stdInfos[i].grade[0] << ", " << stdInfos[i].grade[1] << std::endl << std::endl;
	}

	return 0;
}