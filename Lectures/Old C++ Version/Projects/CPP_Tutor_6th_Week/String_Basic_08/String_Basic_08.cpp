#include <iostream>
#include <string>

int main() {
	// �� ���ڿ��� ����
	std::string text = "Napster's pay-to-play service is officially out, and we have a review of the now-legit Napster. We also size up its companion music player from Samsung.";

	// �� ���ڿ� �ȿ��� 'official'�̶�� �ܾ��� ��ġ�� �E��
	std::cout << "Offset of 'official' = " << text.find("official") << "\n";

	return 0;
}