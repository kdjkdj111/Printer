#pragma once
#include "BasePrinter.h"

class InkJetPrinter : public BasePrinter {
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk);
	~InkJetPrinter() {};
	virtual void print(int pages);
	void printInkJet(int pages);
	int getAvailableInk();
	void getInfo();
};