#include <iostream>
#include "BasePrinter.h"
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;


int main() {

	//������ ���� ����
	BasePrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	BasePrinter* Laser = new LaserPrinter("SCX - 6X45", "�Ｚ����", 3, 20);

	//������ ���� ���
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	Ink->getInfo();
	Laser->getInfo();

	//������ ���� ����
	while (true) {
	
		int printer, pages; //������ ������ �ż� �Է� ����
		char answer; //�߰� ����Ʈ ���� ����

		//������ ������ �ż� �Է�
		cout << endl<< "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;

		//�Է� ���� ó��
		if (cin.fail()) {
			cin.clear();                 
			cin.ignore(1000, '\n');
			cout << "�߸��� �Է��Դϴ�." << endl;
			continue;
		}

		//������ ������ �ż��� ���� ���� ����
		if (pages < 1) {
			cout << "1�� �̻���� ����Ʈ �����մϴ�." << endl;
		}
		else if (printer == 1) {
			Ink->print(pages);
		}
		else if (printer == 2) {
			Laser->print(pages);
		}
		else {
			cout << "�����͸� �ٽ� �������ֽʽÿ�." << endl; //������ ���� ���� ó��
			continue;
		}
		Ink->getInfo(); //������ ���� ���
		Laser->getInfo();

		// �߰� ����Ʈ ���� Ȯ��
		while (true) {
			cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y,n)";
			cin >> answer;

			if (answer == 'y') {
				break;
			}
			else if (answer == 'n') { //����Ʈ ���� �� �޸� �Ҵ� ����
				delete Ink;
				delete Laser;
				return 0;
			}
			else {
				cin.ignore(1000, '\n');
				cout << "y �Ǵ� n���θ� �亯���ּ���."; //�߸��� �Է� ó��
			}
		}
	}
}