#pragma once
#include <iostream>
#include <string>

using namespace std;

class BasePrinter {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
protected:
	void addPrintedCount(int pages);
	void useAvailableCount(int pages);
public:
	BasePrinter(string model, string manufacturer, int availableCount);
	virtual ~BasePrinter() {};
	virtual void print(int pages) =0;
	string getModel();
	string getManufacturer();
	int getAvailableCount();
	virtual void getInfo() = 0;
};