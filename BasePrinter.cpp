#include <iostream>
#include "BasePrinter.h"

//���̽� ������ ������
BasePrinter::BasePrinter(string model, string manufacturer, int availableCount) {
	this->model = model;
	this->manufacturer = manufacturer;
	this->availableCount = availableCount;
	printedCount = 0;
}


//�μ� �ż� ���� �Լ�
void BasePrinter::addPrintedCount(int pages)
{
	printedCount += pages;
}

//�μ� ���� �ܷ� ���� �Լ�
void BasePrinter::useAvailableCount(int pages)
{
	availableCount -= pages;
}

//�𵨸� ��ȯ
string BasePrinter::getModel() {
	return model;
}

//������� ��ȯ
string BasePrinter::getManufacturer() {
	return manufacturer;
}

//�μ� ���� �ܷ� ��ȯ
int BasePrinter::getAvailableCount() {
	return availableCount;
}