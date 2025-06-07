#pragma once
#include "BasePrinter.h"

class LaserPrinter : public BasePrinter {
	int availableToner; //��� �ܷ�
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner); //������
	~LaserPrinter() {}; //�Ҹ���
	virtual void print(int pages); //����Ʈ �Լ� �������̵�
	void printLaser(int pages); //������ ����Ʈ �Լ�
	int getAvailableToner(); //��� �ܷ� ��ȯ �Լ�
	virtual void getInfo(); //������ ���� ��� �Լ�
};

