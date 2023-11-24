#ifndef MANAGERS
#define MANAGERS

#include <iostream>
#include <string>
#include "employees.h"

class Manager:public Employee{
    public:
        int managing; //number of people managed
        std::string position;
    
        Manager();
        Manager(int people_managed, int id, std::string f_name, std::string l_name, std::string phone, int age, float month_sal,  std::string company_name, std::string department);
        void output();
        void calculate_year_income();
        void show_richest();
        void ask_for_bonus(float percent);
};
#endif