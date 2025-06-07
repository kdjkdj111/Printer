#include "InkJetPrinter.h"

//��ũ�� ������ ������
InkJetPrinter::InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : BasePrinter(model, manufacturer, availableCount) {
	this->availableInk = availableInk;
}

//����Ʈ �������̵�
void InkJetPrinter::print(int pages) {
	printInkJet(pages);
}

//��ũ�� ����Ʈ �Լ�
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

//��ũ �ܷ� ��ȯ �Լ�
int InkJetPrinter::getAvailableInk() {
	return availableInk;
}

//��ũ�� ������ ���� ��� �Լ�
void InkJetPrinter::getInfo() {
	cout << "��ũ��: " << getModel() << "," << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << getAvailableInk() << endl;
}