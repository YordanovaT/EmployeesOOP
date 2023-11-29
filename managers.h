#ifndef MANAGERS
#define MANAGERS

#include <iostream>
#include <string>
#include "employees.h"

class Manager:public Employee{
    public:
        int managing; //number of people managed
        std::string position;
    
        ~Manager();
        Manager();
        void output();
        void calculate_year_income();
        void show_richest();
        void ask_for_bonus(float percent);
};
#endif