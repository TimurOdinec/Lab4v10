#include "Employee.h"

/// <summary>
/// �����������, �� !!! ������ ������� ��������� ������������ ������
/// </summary>
/// <param name="lastNameEmployee"></param>
/// <param name="nameEmployee"></param>
Employee::Employee(std::string lastNameEmployee, std::string nameEmployee)
{
	this->lastNameEmployee = lastNameEmployee;
	this->nameEmployee = nameEmployee;
}
/// <summary>
/// ���������� �������� �������
/// </summary>
/// <param name="lastNameEmployee"></param>
void Employee::setLastNameEmployee(std::string lastNameEmployee)
{
	this->lastNameEmployee = lastNameEmployee;
}
/// <summary>
/// �������� �������� �������
/// </summary>
/// <returns></returns>
std::string Employee::getLastNameEmployee()
{
	return lastNameEmployee;
}
/// <summary>
/// ���������� �������� �����
/// </summary>
/// <param name="nameEmployee"></param>
void Employee::setNameEmployee(std::string nameEmployee)
{
	this->nameEmployee = nameEmployee;
}
/// <summary>
/// �������� �������� �����
/// </summary>
/// <returns></returns>
std::string Employee::getNameEmployee()
{
	return nameEmployee;
}