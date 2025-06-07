#include "LaserPrinter.h"

//������ ������ ������
LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : BasePrinter(model, manufacturer, availableCount) {
	this->availableToner = availableToner;
}

//����Ʈ �Լ� �������̵�
void LaserPrinter::print(int pages) {
	printLaser(pages);
}

//������ ������ ���� ����Ʈ �Լ�
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

//��� �ܷ� ��ȯ �Լ�
int LaserPrinter::getAvailableToner() {
	return availableToner;
}

//������ ������ ���� ��� �Լ�
void LaserPrinter::getInfo() {
	cout << "������: " << getModel() << "," << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << getAvailableToner() << endl;
}