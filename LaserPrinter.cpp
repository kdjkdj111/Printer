#include "LaserPrinter.h"

LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : BasePrinter(model, manufacturer, availableCount) {
	this->availableToner = availableToner;
}

void LaserPrinter::print(int pages) {
	printLaser(pages);
}

void LaserPrinter::printLaser(int pages) {
	if (getAvailableCount() < pages) {
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return;
	}
	else if (getAvailableToner() < pages) {
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return;
	}
	else {
		addPrintedCount(pages);
		useAvailableCount(pages);
		availableToner -= pages;
		cout << "����Ʈ �Ͽ����ϴ�." << endl;
	}
}

int LaserPrinter::getAvailableToner() {
	return availableToner;
}

void LaserPrinter::getInfo() {
	cout << "������: " << getModel() << "," << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << getAvailableToner() << endl;
}