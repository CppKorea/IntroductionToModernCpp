#include <iostream>
#include <string>

int main() {
	// ��ü ��θ� ���� ���ڿ��� ����
	std::string path = "C:\\My Document\\Pictures\\33.jpg";

	// ���ڿ��� ���̸� ����
	int len = path.size();

	// �� ������ 3 ���ڸ� ����
	std::string ext = path.substr(len - 3, 3);

	// ����� ���
	std::cout << "extention = " << ext << "\n";

	return 0;
}