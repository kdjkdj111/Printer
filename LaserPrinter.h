#pragma once
#include "BasePrinter.h"

class LaserPrinter : public BasePrinter {
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner);
	~LaserPrinter() {};
	virtual void print(int pages);
	void printLaser(int pages);
	int getAvailableToner();
	void getInfo();
};

