#include "company.h"

Company::Company()
{
    company_name="Not set";
    comp_department="Not set";
}



Company::Company(std::string name, std::string department)
{
    company_name = name;
    comp_department =  department;
}

void Company::output()
{
    std::cout<<"Company name: "<< company_name<< "\tCompany Department: "<< comp_department<<"\n";
}
