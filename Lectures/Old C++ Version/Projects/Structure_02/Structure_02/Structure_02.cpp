#include <iostream>

// 'StudentInfo'��� �̸��� ����ü�� ����
struct StudentInfo {
	char bloodType;		// ������
	int stdNumber;		// �й�
	float grade;		// ����
};

int main() {
	// StudentInfo ����ü Ÿ���� ���� 2���� ����
	StudentInfo si1;
	StudentInfo si2;

	// si1�� ����� ���� ����
	si1.bloodType = 'O';
	si1.stdNumber = 20031128;
	si1.grade = 3.5f;

	// si2�� ����� ���� ����
	si2.bloodType = 'A';
	si2.stdNumber = 19961219;
	si2.grade = 2.3f;

	// ����� ���� ���
	std::cout << "�й� : " << si1.stdNumber << std::endl;
	std::cout << "���� : " << si1.grade << std::endl;
	std::cout << "������ : " << si1.bloodType << std::endl << std::endl;
	std::cout << "�й� : " << si2.stdNumber << std::endl;
	std::cout << "���� : " << si2.grade << std::endl;
	std::cout << "������ : " << si2.bloodType << std::endl << std::endl;

	return 0;
}