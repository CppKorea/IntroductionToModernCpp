#include <iostream>

int main() {
	// Ű�� �÷��� ������ ������ ����
	int height;
	float eyesight;

	// height, eyesight ���� �Է� ����
	height = 175;
	eyesight = 0.8f;

	// ������ �����ϴ��� �˻�
	bool ok;	// �ڰ��� ���� ����ΰ�?
	ok = ((height >= 160 && height <= 180) || (eyesight >= 1.0f && eyesight <= 2.0f));

	// ��� ���
	std::cout << std::boolalpha;
	std::cout << "ok = " << ok << std::endl;

	return 0;
}