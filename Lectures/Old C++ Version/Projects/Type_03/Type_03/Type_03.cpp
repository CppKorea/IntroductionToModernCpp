#include <iostream>

int main() {
	// ���� 10, 8, 16������ ���
	int decimal = 41;		// 10����
	int octal = 041;		// 8����
	int hexadecimal = 0x41;	// 16����

	// ���
	std::cout << "41   = " << decimal << "\n";
	std::cout << "041  = " << octal << "\n";
	std::cout << "0x41 = " << hexadecimal << "\n";

	return 0;
}