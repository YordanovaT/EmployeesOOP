#ifndef EMPLOYEES
#define EMPLOYEES

    #include <iostream>
    #include <string>
    #include "company.h"

    class Employee: public Company{
        public:
            int ID;
            std::string first_name;
            std::string last_name;
            int Age;
            float month_salary;
            float year_income=0;

        
            Employee();
            Employee(int id,  std::string f_name, std::string l_name, int age, float month_sal, std::string company_name,  std::string department);
            float GetIncome();
            virtual void calculate_year_income();
            virtual void show_richest();
            void output();


    };
#endif

