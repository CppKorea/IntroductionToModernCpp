#include <iostream>

int main() {
	// ������ ������ ���� ����
	int age;	// ����
	bool male;	// �����ΰ�?

	// age, male ���� �Է� ����
	age = 20;		// 20��
	male = true;	// ����

	// ������ �����ϴ��� �˻�
	bool ok;	// �ڰ��� ���� ����ΰ�?
	ok = age > 19 && male == true;

	// ��� ���
	std::cout << std::boolalpha;
	std::cout << "ok = " << ok << std::endl;

	return 0;
}