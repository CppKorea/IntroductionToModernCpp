#include <iostream>

int main() {
	// ���ڸ� �غ�
	char c = 'A';

	// ���ڿ��� �غ�
	char s[] = "This is a String.";

	// ���ڿ��� cout ��ü�� �Ѱ���
	std::cout << s << "\n";
	std::cout << &s[0] << "\n";

	// ������ �ּҸ� cout ��ü�� �Ѱ���
	std::cout << &c << "\n";

	return 0;
}