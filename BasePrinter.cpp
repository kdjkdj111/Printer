#include <iostream>
#include "BasePrinter.h"


BasePrinter::BasePrinter(string model, string manufacturer, int availableCount) {
	this->model = model;
	this->manufacturer = manufacturer;
	this->availableCount = availableCount;
	printedCount = 0;
}

void BasePrinter::addPrintedCount(int pages)
{
	printedCount += pages;
}

void BasePrinter::useAvailableCount(int pages)
{
	availableCount -= pages;
}


string BasePrinter::getModel() {
	return model;
}

string BasePrinter::getManufacturer() {
	return manufacturer;
}

int BasePrinter::getAvailableCount() {
	return availableCount;
}