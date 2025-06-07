#pragma once
#include "BasePrinter.h"

class InkJetPrinter : public BasePrinter {
	int availableInk; //잉크 잔량
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk); //생성자
	~InkJetPrinter() {}; //소멸자
	virtual void print(int pages); //프린트 함수 오버라이딩
	void printInkJet(int pages); //잉크젯 프린트 함수
	int getAvailableInk(); //잉크 잔량 반환 함수
	virtual void getInfo(); //프린터 정보 출력 함수
};