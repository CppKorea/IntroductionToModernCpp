#include <iostream>
#include <string>

int main() {
	// ���ڿ��� �غ���
	char cs[20];		// C ��Ÿ��
	std::string cpps;	// C++ ��Ÿ��

	// ���ڿ��� �Է� ����
	std::cin >> cs;
	std::cin >> cpps;

	// ���ڿ��� ���
	std::cout << "cs = " << cs << "\n";
	std::cout << "cpps = " << cpps << "\n";

	return 0;
}