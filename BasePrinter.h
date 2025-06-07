#pragma once
#include <iostream>
#include <string>

using namespace std;

class BasePrinter {
	string model; //모델명
	string manufacturer; //제조사명
	int printedCount; //인쇄 매수
	int availableCount; //인쇄 종이 잔량
protected:
	void addPrintedCount(int pages); //인쇄 매수 증가
	void useAvailableCount(int pages); //인쇄 종이 잔량 감소
public:
	BasePrinter(string model, string manufacturer, int availableCount); //생성자
	virtual ~BasePrinter() {}; //소멸자
	virtual void print(int pages) = 0; //프린트 가상함수
	string getModel(); //모델명 반환
	string getManufacturer(); //제조사명 반환
	int getPrintedCount(); //인쇄 매수 반환
	int getAvailableCount(); //인쇄 종이 잔량 반환
	virtual void getInfo() = 0; //프린터 정보 출력 가상함수
};