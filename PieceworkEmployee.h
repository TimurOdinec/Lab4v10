#pragma once
#include "Employee.h"
#include <iostream>

/// <summary>
/// ����� ����������� �� Employee, ����������� �������������� ����� showInfoEmployee()
/// </summary>
class PieceworkEmployee : public Employee
{
private:
	int unitPayment;					//������ ������� ���������
	int numberOfProductUnitsPerWeek;	//����� ������ ��������� �� ������
public:
	PieceworkEmployee(int, int, std::string, std::string);	//�����������
	void setUnitPayment(int);								//���������� �������� ������ ������� ���������
	int getUnitPayment();									//�������� �������� ������ ������� ���������
	void setNumberOfProductUnitsPerWeek(int);				//���������� �������� ����� ������ ��������� �� ������
	int getNumberOfProductUnitsPerWeek();					//�������� �������� ����� ������ ��������� �� ������
	void showInfoEmployee() override;						//�������������� ����� ������������ ������-��������
};