#include <iostream>

int main() {
	// int Ÿ���� �����Ϳ� ���� ����
	int iArray[10];
	int* pi = &iArray[3];

	std::cout << "pi = " << pi << std::endl;
	std::cout << "pi + 1 = " << pi + 1 << std::endl;
	std::cout << "pi + 2 = " << pi + 2 << std::endl;
	std::cout << "pi - 1 = " << pi - 1 << std::endl;

	// short Ÿ���� �����Ϳ� ���� ����
	short sArray[10];
	short* ps = &sArray[3];

	std::cout << "ps = " << ps << std::endl;
	std::cout << "ps + 1 = " << ps + 1 << std::endl;
	std::cout << "ps + 2 = " << ps + 2 << std::endl;
	std::cout << "ps - 1 = " << ps - 1 << std::endl;

	return 0;
}