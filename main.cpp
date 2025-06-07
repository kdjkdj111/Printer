#include <iostream>
#include "BasePrinter.h"
#include "InkJetPrinter.h"
#include "LaserPrinter.h"
using namespace std;


int main() {

	BasePrinter* Ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	BasePrinter* Laser = new LaserPrinter("SCX - 6X45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	Ink->getInfo();
	Laser->getInfo();


	while (true) {
		int printer, pages;
		char answer;

		cout << endl<< "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> printer >> pages;

		if (cin.fail()) {
			cin.clear();                 
			cin.ignore(1000, '\n');
			cout << "잘못된 입력입니다." << endl;
			continue;
		}

		if (pages < 1) {
			cout << "1매 이상부터 프린트 가능합니다." << endl;
		}
		else if (printer == 1) {
			Ink->print(pages);
		}
		else if (printer == 2) {
			Laser->print(pages);
		}
		else {
			cout << "프린터를 다시 선택해주십시오." << endl;
			continue;
		}
		Ink->getInfo();
		Laser->getInfo();


		while (true) {
			cout << "계속 프린트 하시겠습니까(y,n)";
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
				cout << "y 또는 n으로만 답변해주세요.";
			}
		}
	}
}