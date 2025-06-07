#pragma once
#include "BasePrinter.h"

class LaserPrinter : public BasePrinter {
	int availableToner; //토너 잔량
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner); //생성자
	~LaserPrinter() {}; //소멸자
	virtual void print(int pages); //프린트 함수 오버라이딩
	void printLaser(int pages); //레이저 프린트 함수
	int getAvailableToner(); //토너 잔량 반환 함수
	virtual void getInfo(); //프린터 정보 출력 함수
};

