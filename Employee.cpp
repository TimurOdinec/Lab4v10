#include "Employee.h"

/// <summary>
/// конструктор, но !!! нельзя создать экземпляр абстрактного класса
/// </summary>
/// <param name="lastNameEmployee"></param>
/// <param name="nameEmployee"></param>
Employee::Employee(std::string lastNameEmployee, std::string nameEmployee)
{
	this->lastNameEmployee = lastNameEmployee;
	this->nameEmployee = nameEmployee;
}
/// <summary>
/// установить занчение фамилии
/// </summary>
/// <param name="lastNameEmployee"></param>
void Employee::setLastNameEmployee(std::string lastNameEmployee)
{
	this->lastNameEmployee = lastNameEmployee;
}
/// <summary>
/// получить значение фамилии
/// </summary>
/// <returns></returns>
std::string Employee::getLastNameEmployee()
{
	return lastNameEmployee;
}
/// <summary>
/// установить значение имени
/// </summary>
/// <param name="nameEmployee"></param>
void Employee::setNameEmployee(std::string nameEmployee)
{
	this->nameEmployee = nameEmployee;
}
/// <summary>
/// получить значение имени
/// </summary>
/// <returns></returns>
std::string Employee::getNameEmployee()
{
	return nameEmployee;
}