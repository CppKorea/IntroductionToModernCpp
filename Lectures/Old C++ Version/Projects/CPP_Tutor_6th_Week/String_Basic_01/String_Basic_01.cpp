#include <iostream>
#include <cstring>

int main() {
	// ���� ���ڿ��� �ϳ� ����
	char src[] = "KNUCSE C++ Tutor";

	// ���� ���ڿ� �����ϱ�!
	
	// 1. ���� ���ڿ��� ���̸� ��
	int len = strlen(src);

	// 2. �� ���ڿ��� ��� �޸𸮸� �Ҵ���
	char* dest = new char[len + 1];

	// 3. ���ڿ��� ������
	strcpy(dest, src);

	// ����� ���
	std::cout << "src = " << src << "\n";
	std::cout << "dest = " << dest << "\n";

	// �޸𸮸� ������
	delete[] dest;
	dest = NULL;

	return 0;
}