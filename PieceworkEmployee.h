#pragma once
#include "Employee.h"
#include <iostream>

/// <summary>
/// класс наследуется от Employee, обязательно переопределяем метод showInfoEmployee()
/// </summary>
class PieceworkEmployee : public Employee
{
private:
	int unitPayment;					//оплата единицы продукции
	int numberOfProductUnitsPerWeek;	//число единиц продукции за неделю
public:
	PieceworkEmployee(int, int, std::string, std::string);	//конструктор
	void setUnitPayment(int);								//установить занчение оплаты единицы продукции
	int getUnitPayment();									//получить значение оплаты единицы продукции
	void setNumberOfProductUnitsPerWeek(int);				//установить занчение числа единиц продукции за неделю
	int getNumberOfProductUnitsPerWeek();					//получить значение числа единиц продукции за неделю
	void showInfoEmployee() override;						//переопределяем метод абстрактного класса-родителя
};