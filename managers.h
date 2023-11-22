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
        Manager(int people_managed, int id, std::string f_name, std::string l_name, int age, float month_sal,  std::string company_name, std::string department);
        
};
#endif