#include <iostream>

// �迭�� ���ڷ� ���� �Լ��� ����
void UsingArray(const char arr[]);

int main() {
	// �迭�� ����� �ʱ�ȭ
	char array[20] = "Hello, World!";

	// �Լ��� �迭�� �Ѱ���
	UsingArray(array);

	// �Լ� ȣ�� ���� �迭 ���¸� ���
	std::cout << "In main() : " << array << "\n";

	return 0;
}

void UsingArray(const char arr[]) {
	// �Ѱ� ���� �迭�� ���
	std::cout << "In UsingArray() : " << arr << "\n";

	// �迭�� ���� �ϳ��� ����
	arr[12] = '?';
}