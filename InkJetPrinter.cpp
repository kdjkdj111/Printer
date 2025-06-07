#include "InkJetPrinter.h"

//잉크젯 프린터 생성자
InkJetPrinter::InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : BasePrinter(model, manufacturer, availableCount) {
	this->availableInk = availableInk;
}

//프린트 오버라이딩
void InkJetPrinter::print(int pages) {
	printInkJet(pages);
}

//잉크젯 프린트 함수
void InkJetPrinter::printInkJet(int pages) {
	if (getAvailableCount() < pages) {
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		return;
	}
	else if (getAvailableInk() < pages) {
		cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
		return;
	}
	else {
		addPrintedCount(pages);
		useAvailableCount(pages);
		availableInk -= pages;
		cout << "프린트 하였습니다." << endl;
	}
}

//잉크 잔량 반환 함수
int InkJetPrinter::getAvailableInk() {
	return availableInk;
}

//잉크젯 프린터 정보 출력 함수
void InkJetPrinter::getInfo() {
	cout << "잉크젯: " << getModel() << "," << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크 " << getAvailableInk() << endl;
}