#pragma once
#include "Employee.h"
#include <iostream>

/// <summary>
/// класс наследуется от Employee, обязательно переопределяем метод showInfoEmployee()
/// </summary>
class HourlyEmployee : public Employee
{
private:
	int paymentPerHour;		//оплата за час 
	int hoursWorkedPerWeek;	//часы, отработанные за неделю
public:
	HourlyEmployee(int, int, std::string, std::string); //конструктор
	void setPaymentPerHour(int);						//установить занчение оплаты за час
	int getPaymentPerHour();							//получить значение оплаты за час
	void setHoursWorkedPerWeek(int);					//установить занчение часов, отработанных за неделю
	int getHoursWorkedPerWeek();						//получить значение часов, отработанных за неделю
	void showInfoEmployee() override;					//переопределяем метод абстрактного класса-родителя
};