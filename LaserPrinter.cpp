#include "LaserPrinter.h"

//레이저 프린터 생성자
LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) : BasePrinter(model, manufacturer, availableCount) {
	this->availableToner = availableToner;
}

//프린트 함수 오버라이딩
void LaserPrinter::print(int pages) {
	printLaser(pages);
}

//레이저 프린터 전용 프린트 함수
void LaserPrinter::printLaser(int pages) {
	if (getAvailableCount() < pages) {
		cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		return;
	}
	else if (getAvailableToner() < pages) {
		cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
		return;
	}
	else {
		addPrintedCount(pages);
		useAvailableCount(pages);
		availableToner -= pages;
		cout << "프린트 하였습니다." << endl;
	}
}

//토너 잔량 반환 함수
int LaserPrinter::getAvailableToner() {
	return availableToner;
}

//레이저 프린터 정보 출력 함수
void LaserPrinter::getInfo() {
	cout << "레이저: " << getModel() << "," << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너 " << getAvailableToner() << endl;
}