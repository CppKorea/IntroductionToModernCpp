#include <iostream>

// �л� ������ ���� ����ü
struct StudentInfo {
	char name[20];	// �̸�
	int stdNumber;	// �й�
	float grade[2];	// �ֱ� 2�б� ����
};

int main() {
	// �л��� ���� ������ ����
	StudentInfo si = {"Kim Chol-Su", 200121233, {3.2f, 3.5f}};

	// �л��� ������ ���
	std::cout << si.name << std::endl;
	std::cout << si.stdNumber << std::endl;
	std::cout << si.grade[0] << ", " << si.grade[1] << std::endl;

	return 0;
}