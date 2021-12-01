#include "PieceworkEmployee.h"

/// <summary>
/// конструктор, вызываем и конструктор класса-родителя
/// </summary>
/// <param name="unitPayment"></param>
/// <param name="numberOfProductUnitsPerWeek"></param>
/// <param name="lastNameEmployee"></param>
/// <param name="nameEmployee"></param>
PieceworkEmployee::PieceworkEmployee(int unitPayment, int numberOfProductUnitsPerWeek, std::string lastNameEmployee, std::string nameEmployee)
									: Employee(lastNameEmployee, nameEmployee)
{
	this->unitPayment = unitPayment;
	this->numberOfProductUnitsPerWeek = numberOfProductUnitsPerWeek;
}
/// <summary>
/// установить занчение оплаты единицы продукции
/// </summary>
/// <param name="unitPayment"></param>
void PieceworkEmployee::setUnitPayment(int unitPayment)
{
	this->unitPayment = unitPayment;
}
/// <summary>
/// получить значение оплаты единицы продукции
/// </summary>
/// <returns></returns>
int PieceworkEmployee::getUnitPayment()
{
	return this->unitPayment;
}
/// <summary>
/// установить занчение числа единиц продукции за неделю
/// </summary>
/// <param name="numberOfProductUnitsPerWeek"></param>
void PieceworkEmployee::setNumberOfProductUnitsPerWeek(int numberOfProductUnitsPerWeek)
{
	this->numberOfProductUnitsPerWeek = numberOfProductUnitsPerWeek;
}
/// <summary>
/// получить значение числа единиц продукции за неделю
/// </summary>
/// <returns></returns>
int PieceworkEmployee::getNumberOfProductUnitsPerWeek()
{
	return this->numberOfProductUnitsPerWeek;
}
/// <summary>
/// переопределяем метод абстрактного класса-родителя
/// </summary>
void PieceworkEmployee::showInfoEmployee()
{
	std::cout << "PieceworkEmployee : showInfoEmployee()" << std::endl;
	std::cout << "PieceworkEmployee : unitPayment = " << unitPayment << " $ " << std::endl;
	std::cout << "PieceworkEmployee : numberOfProductUnitsPerWeek = " << numberOfProductUnitsPerWeek << " pieces " << std::endl;
	std::cout << "Employee : lastNameEmployee = " << this->getLastNameEmployee() << std::endl;
	std::cout << "Employee : nameEmployee = " << this->getNameEmployee() << std::endl;
}