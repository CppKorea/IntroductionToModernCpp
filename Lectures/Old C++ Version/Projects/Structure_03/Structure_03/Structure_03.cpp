#include <iostream>

// 'StudentInfo'��� �̸��� ����ü�� ����
struct StudentInfo {
	char bloodType;		// ������
	int stdNumber;		// �й�
	float grade;		// ����
};

int main() {
	// StudentInfo ����ü Ÿ���� ���� 2���� ����
	StudentInfo si1 = {'O', 20031128, 3.5f};
	StudentInfo si2 = {'A', 19961219, 2.3f};

	// ����� ���� ���
	std::cout << "�й� : " << si1.stdNumber << std::endl;
	std::cout << "���� : " << si1.grade << std::endl;
	std::cout << "������ : " << si1.bloodType << std::endl << std::endl;
	std::cout << "�й� : " << si2.stdNumber << std::endl;
	std::cout << "���� : " << si2.grade << std::endl;
	std::cout << "������ : " << si2.bloodType << std::endl << std::endl;

	return 0;
}