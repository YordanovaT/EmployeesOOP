#ifndef COMPANY
#define COMPANY

#include <iostream>
#include <string>

class Company{
    public:
        std::string company_name;
        std::string comp_department;
    
        Company();
        Company(std::string name, std::string department);
        virtual void output();
};
#endif