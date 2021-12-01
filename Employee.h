#pragma once
#include <string>

/// <summary>
/// абстрактный класс содержит виртуальный метод showInfoEmployee()
/// </summary>
class Employee
{
private:
	std::string lastNameEmployee;	//фамилия служ.
	std::string nameEmployee;		//имя служ.
public:
	Employee(std::string, std::string);		//конструктор
	void setLastNameEmployee(std::string);	//установить занчение фамилии
	std::string getLastNameEmployee();		//получить значение фамилии
	void setNameEmployee(std::string);		//установить значение имени
	std::string getNameEmployee();			//получить значение имени

	virtual void showInfoEmployee() =0;		//виртуальны метод, который будем переопределять в классах-потомках
};