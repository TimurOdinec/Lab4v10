// Lab4v10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Создать абстрактный базовый класс «Служащий», содержащий фамилию и имя служащего. 
// Employee
// Производный класс «Работники с почасовой оплатой» содержит следующие поля: 
// оплата за час 
// и часы, отработанные за неделю. 
// Производный класс «Работники со сдельной оплатой» содержит следующие поля: 
// оплата единицы продукции 
// и число единиц продукции за неделю. 
// Все классы должны содержать функции получения и изменения всех полей. 
// Написать программу, позволяющую получать сведения о служащих
// 
//

#include "Employee.h"
#include "HourlyEmployee.h"
#include "PieceworkEmployee.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "START" << std::endl;
    //создаем экземпляр класса HourlyEmployee
    HourlyEmployee hourlyEmployee(10, 40, "Иванов", "Иван");
    //вызываем переопределенный метод
    hourlyEmployee.showInfoEmployee();
    std::cout << "##################################################################" << std::endl;
    //создаем экземпляр класса PieceworkEmployee
    PieceworkEmployee pieceworkEmployee(50, 10, "Петров", "Петр");
    //вызываем переопределенный метод
    pieceworkEmployee.showInfoEmployee();
    std::cout << "##################################################################" << std::endl;
    //создаем указатель на массив объектов
    Employee *employeeArray[4];
    //создаем объекты HourlyEmployee
    employeeArray[0] = new HourlyEmployee(15, 48,"Сидоров","Сидор");
    employeeArray[1] = new HourlyEmployee(22, 24, "Капоне", "Аль");
    //создаем объекты PieceworkEmployee
    employeeArray[2] = new PieceworkEmployee(100, 21, "Эйнштейн", "Альберт");
    employeeArray[3] = new PieceworkEmployee(84, 34, "Джобс", "Стив");
    for (int i = 0; i < 4; i++)
    {
        //!!!
        //! для всех элементов массива АВТОМАТИЧЕСКИ (согласно типа: HourlyEmployee или PieceworkEmployee) 
        //! запускается переопределенный метод showInfoEmployee()
        //!!!
        employeeArray[i]->showInfoEmployee();
        std::cout << "##################################################################" << std::endl;
    }
}

