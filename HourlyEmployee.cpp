#include "HourlyEmployee.h"

/// <summary>
/// �����������, �������� � ����������� ������-��������
/// </summary>
/// <param name="paymentPerHour"></param>
/// <param name="hoursWorkedPerWeek"></param>
/// <param name="lastNameEmployee"></param>
/// <param name="nameEmployee"></param>
HourlyEmployee::HourlyEmployee(int paymentPerHour, int hoursWorkedPerWeek, std::string lastNameEmployee, std::string nameEmployee)
							: Employee(lastNameEmployee, nameEmployee)
{
	this->paymentPerHour = paymentPerHour;
	this->hoursWorkedPerWeek = hoursWorkedPerWeek;
}
/// <summary>
/// ���������� �������� ������ �� ���
/// </summary>
/// <param name="paymentPerHour"></param>
void HourlyEmployee::setPaymentPerHour(int paymentPerHour)
{
	this->paymentPerHour = paymentPerHour;
}
/// <summary>
/// �������� �������� ������ �� ���
/// </summary>
/// <returns></returns>
int HourlyEmployee::getPaymentPerHour()
{
	return paymentPerHour;
}
/// <summary>
/// ���������� �������� �����, ������������ �� ������
/// </summary>
/// <param name="hoursWorkedPerWeek"></param>
void HourlyEmployee::setHoursWorkedPerWeek(int hoursWorkedPerWeek)
{
	this->hoursWorkedPerWeek = hoursWorkedPerWeek;
}
/// <summary>
/// �������� �������� �����, ������������ �� ������
/// </summary>
/// <returns></returns>
int HourlyEmployee::getHoursWorkedPerWeek()
{
	return hoursWorkedPerWeek;
}
/// <summary>
/// �������������� ����� ������������ ������-��������
/// </summary>
void HourlyEmployee::showInfoEmployee()
{
	std::cout << "HourlyEmployee : showInfoEmployee()" << std::endl;
	std::cout << "HourlyEmployee : paymentPerHour = "<< paymentPerHour << " $ " << std::endl;
	std::cout << "HourlyEmployee : hoursWorkedPerWeek = " << hoursWorkedPerWeek << " hours " << std::endl;
	std::cout << "Employee : lastNameEmployee = " << this->getLastNameEmployee() << std::endl;
	std::cout << "Employee : nameEmployee = " << this->getNameEmployee() << std::endl;
}