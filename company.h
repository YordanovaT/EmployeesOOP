#ifndef COMPANY
#define COMPANY

#include <iostream>
#include <string>
#include "employees.h"

class Company{
    public:
        Employee *empl_arr[50];
        std::string company_name;
        int employees_count;
    
        Company(std::string name);
        ~Company();
        void add_employee(Employee *employee);
        void delete_employee();
        void income_of_all_empl();
        void print_richest_employees();
        void print();
        int check_if_limit_reached();
        void give_raise();
        void contact_info();
        //void search_for_employee();
};
#endif