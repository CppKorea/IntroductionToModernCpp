#include <iostream>

int main() {
	// ���ڿ� ����� ����ؼ� �迭�� �ʱ�ȭ
	char cArray1[] = "ABCDE";
	char cArray2[] = {'A', 'B', 'C', 'D', 'E', 0};

	// �� �迭�� ũ�⸦ ��
	std::cout << "sizeof(cArray1) = " << sizeof(cArray1) << "(Bytes)" << std::endl;
	std::cout << "sizeof(cArray2) = " << sizeof(cArray2) << "(Bytes)" << std::endl;

	// �� �迭�� 4, 5��° ���Ҹ� ���
	std::cout << cArray1[4] << (int)cArray1[5] << std::endl;
	std::cout << cArray2[4] << (int)cArray2[5] << std::endl;

	return 0;
}