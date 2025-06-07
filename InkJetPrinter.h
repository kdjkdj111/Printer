#pragma once
#include "BasePrinter.h"

class InkJetPrinter : public BasePrinter {
	int availableInk; //��ũ �ܷ�
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk); //������
	~InkJetPrinter() {}; //�Ҹ���
	virtual void print(int pages); //����Ʈ �Լ� �������̵�
	void printInkJet(int pages); //��ũ�� ����Ʈ �Լ�
	int getAvailableInk(); //��ũ �ܷ� ��ȯ �Լ�
	virtual void getInfo(); //������ ���� ��� �Լ�
};