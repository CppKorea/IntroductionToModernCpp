#include <iostream>

int main() {
	// ������ ������ ���� ����
	int age;	// ����

	// age ���� �Է� ����
	age = 19;	// 19��

	// ���ǿ� ���� �ٸ� ���ڿ��� ���
	if (age <= 18) {
		std::cout << "�̼������Դϴ�" << std::endl;
	} else if (age == 19) {
		std::cout << "�ƽ��׿�" << std::endl;
	} else {
		std::cout << "�����Դϴ�" << std::endl;
	}

	return 0;
}