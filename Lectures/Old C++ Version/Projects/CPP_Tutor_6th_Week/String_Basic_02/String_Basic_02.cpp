#include <iostream>
#include <cstring>

int main() {
	// �� ���ڿ��� �غ�
	char str1[20] = "abcde";
	char str2[] = "fghij";

	// �� ���ڿ��� ����
	strcat(str1, str2);

	// ������ ���ڿ��� ������ ��
	if (strcmp(str1, "abcdefghij") == 0) {
		std::cout << "str1 and \"abcdefghij\" are identical.\n";
	}

	// �Ϻη� ������ ���ڿ��� ��
	if (strcmp(str1, "123456") != 0) {
		std::cout << "str1 and \"123456\" are NOT identical.\n";
	}

	return 0;
}