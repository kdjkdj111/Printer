#include "InkJetPrinter.h"

InkJetPrinter::InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : BasePrinter(model, manufacturer, availableCount) {
	this->availableInk = availableInk;
}

void InkJetPrinter::print(int pages) {
	printInkJet(pages);
}

void InkJetPrinter::printInkJet(int pages) {
	if (getAvailableCount() < pages) {
		cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return;
	}
	else if (getAvailableInk() < pages) {
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		return;
	}
	else {
		addPrintedCount(pages);
		useAvailableCount(pages);
		availableInk -= pages;
		cout << "����Ʈ �Ͽ����ϴ�." << endl;
	}
}

int InkJetPrinter::getAvailableInk() {
	return availableInk;
}

void InkJetPrinter::getInfo() {
	cout << "��ũ��: " << getModel() << "," << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << getAvailableInk() << endl;
}