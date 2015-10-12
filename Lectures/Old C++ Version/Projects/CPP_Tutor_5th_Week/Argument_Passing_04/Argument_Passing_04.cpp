#include <iostream>

// �ִ������� �ּҰ������ ����
void GCD_LCM(int a, int b, int gcd, int lcm) {
	// ��Ŭ������ ȣ������ ����ؼ� GCD�� ����
	int z;
	int x = a;
	int y = b;

	while (true) {
		z = x % y;

		if (z == 0) {
			break;
		}

		x = y;
		y = z;
	}

	// ����� ����
	gcd = y;
	lcm = a * b / gcd;
}

int main() {
	// 28�� 35�� �ִ������� �ּҰ������ ����
	int gcd = 0;
	int lcm = 0;
	GCD_LCM(28, 35, gcd, lcm);

	// ����� ���
	std::cout << "GCD = " << gcd << "\n";
	std::cout << "LCM = " << lcm << "\n";

	return 0;
}