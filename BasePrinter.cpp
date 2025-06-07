#include <iostream>
#include "BasePrinter.h"

//베이스 프린터 생성자
BasePrinter::BasePrinter(string model, string manufacturer, int availableCount) {
	this->model = model;
	this->manufacturer = manufacturer;
	this->availableCount = availableCount;
	printedCount = 0;
}


//인쇄 매수 증가 함수
void BasePrinter::addPrintedCount(int pages)
{
	printedCount += pages;
}

//인쇄 종이 잔량 감소 함수
void BasePrinter::useAvailableCount(int pages)
{
	availableCount -= pages;
}

//모델명 반환
string BasePrinter::getModel() {
	return model;
}

//제조사명 반환
string BasePrinter::getManufacturer() {
	return manufacturer;
}

//인쇄 종이 잔량 반환
int BasePrinter::getAvailableCount() {
	return availableCount;
}