#pragma once
#include <string>

/// <summary>
/// ����������� ����� �������� ����������� ����� showInfoEmployee()
/// </summary>
class Employee
{
private:
	std::string lastNameEmployee;	//������� ����.
	std::string nameEmployee;		//��� ����.
public:
	Employee(std::string, std::string);		//�����������
	void setLastNameEmployee(std::string);	//���������� �������� �������
	std::string getLastNameEmployee();		//�������� �������� �������
	void setNameEmployee(std::string);		//���������� �������� �����
	std::string getNameEmployee();			//�������� �������� �����

	virtual void showInfoEmployee() =0;		//���������� �����, ������� ����� �������������� � �������-��������
};