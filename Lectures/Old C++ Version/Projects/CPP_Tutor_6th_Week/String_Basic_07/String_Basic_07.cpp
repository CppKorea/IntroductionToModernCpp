#include <iostream>
#include <string>

int main() {
	// �� ���ڿ��� �غ�
	std::string str1 = "abcde";
	std::string str2 = "fghij";

	// �� ���ڿ��� ����
	str1 = str1 + str2;

	// ������ ���ڿ��� ������ ��
	if (str1 == "abcdefghij") {
		std::cout << "str1 and \"abcdefghij\" are identical.\n";
	}

	// �Ϻη� ������ ���ڿ��� ��
	if (str1 != "123456") {
		std::cout << "str1 and \"123456\" are NOT identical.\n";
	}

	return 0;
}