#include <iostream>

int main() {
	// ����ڷκ��� ���� ���� ����
	char yn;

	do {
		std::cout << "Continue? (Y/N) : ";
		// ����ڷκ��� ���� ����
		std::cin >> yn;
	} while (yn != 'N' && yn != 'n');
}