#include <iostream>
#include <string>

int main() {
	// ���ڿ��� ����
	std::string s1;
	std::string s2 = "123";
	std::string s3 = "abcdefg";

	// ���ڿ��� ���̸� ���
	std::cout << "s1 = " << s1.size() << "\n";
	std::cout << "s2 = " << s2.size() << "\n";
	std::cout << "s3 = " << s3.size() << "\n";

	return 0;
}