#pragma once
#include "Employee.h"
#include <iostream>

/// <summary>
/// ����� ����������� �� Employee, ����������� �������������� ����� showInfoEmployee()
/// </summary>
class HourlyEmployee : public Employee
{
private:
	int paymentPerHour;		//������ �� ��� 
	int hoursWorkedPerWeek;	//����, ������������ �� ������
public:
	HourlyEmployee(int, int, std::string, std::string); //�����������
	void setPaymentPerHour(int);						//���������� �������� ������ �� ���
	int getPaymentPerHour();							//�������� �������� ������ �� ���
	void setHoursWorkedPerWeek(int);					//���������� �������� �����, ������������ �� ������
	int getHoursWorkedPerWeek();						//�������� �������� �����, ������������ �� ������
	void showInfoEmployee() override;					//�������������� ����� ������������ ������-��������
};