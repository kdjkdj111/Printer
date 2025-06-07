#include "LaserPrinter.h"

LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : BasePrinter(model, manufacturer, availableCount) {
	this->availableToner = availableToner;
}

void LaserPrinter::print(int pages) {
	printLaser(pages);
}

void LaserPrinter::printLaser(int pages) {
	if (getAvailableCount() < pages) {
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		return;
	}
	else if (getAvailableToner() < pages) {
		cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
		return;
	}
	else {
		addPrintedCount(pages);
		useAvailableCount(pages);
		availableToner -= pages;
		cout << "프린트 하였습니다." << endl;
	}
}

int LaserPrinter::getAvailableToner() {
	return availableToner;
}

void LaserPrinter::getInfo() {
	cout << "레이저: " << getModel() << "," << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너 " << getAvailableToner() << endl;
}