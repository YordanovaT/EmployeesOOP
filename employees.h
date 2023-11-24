#ifndef EMPLOYEES
#define EMPLOYEES

    #include <iostream>
    #include <string>
    #include "company.h"

    class Bonus
    {
        virtual void ask_for_bonus(float percent)=0; //by this the class becomes abstract class
    };
    class Employee: public Company, Bonus{
        public:
            int ID;
            std::string first_name;
            std::string last_name;
            std::string phone;
            std::string email;
            int Age;
            float month_salary;
            float year_income=0;


        
            Employee();
            Employee(int id,  std::string f_name, std::string l_name, std::string phone_num, int age, float month_sal, std::string company_name,  std::string department);
            float GetIncome();
            void GetContactInfo();
            virtual void calculate_year_income();
            virtual void show_richest();
            void output();
            void ask_for_bonus(float percent);

    };
#endif

