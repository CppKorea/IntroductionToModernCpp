#include <iostream>

int main() {
	// �� ���� ������ �Է����� ���
	int size;
	std::cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�? ";
	std::cin >> size;

	// �ʿ��� ��ŭ�� �޸𸮸� �Ҵ�
	int* arr = new int[size];

	// ������ �Է� ����
	std::cout << "������ �Է��ϼ���.\n";
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	// ����� ����ϰ� ���
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	float avg = (float)(sum) / (float)(size);
	std::cout << "�� = " << sum << ", ��� = " << avg << "\n";

	// ����� �޸𸮸� ����
	delete[] arr;

	return 0;
}