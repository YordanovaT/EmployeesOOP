#include "managers.h"

Manager::Manager()
{
   managing=0;
}

Manager::Manager(int people_managed, int id, std::string f_name, std::string l_name, int age, float month_sal,  std::string company_name, std::string department):
Employee(id, f_name, l_name, age, month_sal, company_name, department)
{
    managing=people_managed;
}

void Manager::output()
{
    std::cout<<"Company Name: " << company_name<<"\tManager of: "<<comp_department<<std::endl;
    std::cout<<"Name: "<< first_name<< " "<<last_name << "\tAge: "<<Age<< "\nMonth salary: "<<month_salary<<std::endl;
}

