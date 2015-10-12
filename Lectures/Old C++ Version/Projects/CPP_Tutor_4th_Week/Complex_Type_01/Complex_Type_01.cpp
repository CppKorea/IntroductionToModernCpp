#include <iostream>

// ����ü ����
union MyUnion {
	int i;
	void* p;
};

int main() {
	// ����ü ���� ����
	MyUnion uni;

	// uni.i�� uni.p�� �ּҸ� Ȯ��
	std::cout << "&uni.i = " << &uni.i << std::endl;
	std::cout << "&uni.p = " << &uni.p << std::endl;

	// uni.i�� ���� �ְ� ����� ���
	uni.i = 0x12345678;
	std::cout << std::hex;
	std::cout << "uni.i = " << uni.i << std::endl;
	std::cout << "uni.p = " << uni.p << std::endl;

	// uni.p�� ���� �ְ� ����� ���
	uni.p = (void*)0x87654321;
	std::cout << "uni.i = " << uni.i << std::endl;
	std::cout << "uni.p = " << uni.p << std::endl;

	return 0;
}