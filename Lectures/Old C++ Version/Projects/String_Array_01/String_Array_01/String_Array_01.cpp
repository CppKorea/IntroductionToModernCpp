#include <iostream>

int main() {
	// �׳� ������ �迭�� ����
	char ThisIsNotString[] = {'H', 'e', 'l', 'l', 'o'};

	// ���ڿ��� ����
	char ThisIsString[] = {'H', 'e', 'l', 'l', 'o', '\0'};

	// �� �迭�� cout ��ü�� ����
	std::cout << ThisIsNotString << std::endl;
	std::cout << ThisIsString << std::endl;

	return 0;
}