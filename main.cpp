#include <iostream>
#include "BasePrinter.h"
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;


int main() {

	BasePrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	BasePrinter* Laser = new LaserPrinter("SCX - 6X45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	Ink->getInfo();
	Laser->getInfo();


	while (true) {
		int printer, pages;
		char answer;

		cout << endl<< "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> printer >> pages;

		if (cin.fail()) {
			cin.clear();                 
			cin.ignore(1000, '\n');
			cout << "�߸��� �Է��Դϴ�." << endl;
			continue;
		}

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
			cout << "�����͸� �ٽ� �������ֽʽÿ�." << endl;
			continue;
		}
		Ink->getInfo();
		Laser->getInfo();


		while (true) {
			cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y,n)";
			cin >> answer;

			if (answer == 'y') {
				break;
			}
			else if (answer == 'n') {
				delete Ink;
				delete Laser;
				return 0;
			}
			else {
				cout << "y �Ǵ� n���θ� �亯���ּ���.";
			}
		}
	}
}