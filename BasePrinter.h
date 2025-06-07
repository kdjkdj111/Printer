#pragma once
#include <iostream>
#include <string>

using namespace std;

class BasePrinter {
	string model; //�𵨸�
	string manufacturer; //�������
	int printedCount; //�μ� �ż�
	int availableCount; //�μ� ���� �ܷ�
protected:
	void addPrintedCount(int pages); //�μ� �ż� ����
	void useAvailableCount(int pages); //�μ� ���� �ܷ� ����
public:
	BasePrinter(string model, string manufacturer, int availableCount); //������
	virtual ~BasePrinter() {}; //�Ҹ���
	virtual void print(int pages) = 0; //����Ʈ �����Լ�
	string getModel(); //�𵨸� ��ȯ
	string getManufacturer(); //������� ��ȯ
	int getPrintedCount(); //�μ� �ż� ��ȯ
	int getAvailableCount(); //�μ� ���� �ܷ� ��ȯ
	virtual void getInfo() = 0; //������ ���� ��� �����Լ�
};