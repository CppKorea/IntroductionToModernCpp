#include <iostream>
#include <string>

int main() {
	// ���� ���ڿ��� �غ�
	std::string src = "KNUCSE C++ Tutor";
	
	// �� ���ڿ��� �غ�
	std::string desc;

	// ���ڿ��� ������ ����
	desc = src;

	// �� ���ڿ��� ������ ���
	std::cout << "src = " << src << "\n";
	std::cout << "desc = " << desc << "\n";

	return 0;
}