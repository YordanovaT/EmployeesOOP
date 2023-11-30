#ifndef EMPLOYEES
#define EMPLOYEES

    #include <iostream>
    #include <string>

    class Bonus
    {
        public:
        virtual void ask_for_bonus(float percent)=0; //by this the class becomes abstract class
    };
    class Employee: public Bonus{
        public:
            int ID;
            std::string first_name;
            std::string last_name;
            std::string phone;
            std::string email;
            std::string department;

            int Age;
            float month_salary;
            float bonus_percentage;
            float year_income;

            ~Employee();
            Employee();
            float GetIncome();
            void GetContactInfo();
            virtual void calculate_year_income();
            virtual void show_richest();
            virtual void output();
            void ask_for_bonus(float percent);

    };
#endif

