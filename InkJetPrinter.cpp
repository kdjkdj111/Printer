#include "InkJetPrinter.h"

InkJetPrinter::InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : BasePrinter(model, manufacturer, availableCount) {
	this->availableInk = availableInk;
}

void InkJetPrinter::print(int pages) {
	printInkJet(pages);
}

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

int InkJetPrinter::getAvailableInk() {
	return availableInk;
}

void InkJetPrinter::getInfo() {
	cout << "잉크젯: " << getModel() << "," << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크 " << getAvailableInk() << endl;
}