#include "managers.h"

Manager::Manager()
{
   managing=0;
}

Manager::Manager(int people_managed, int id, std::string f_name, std::string l_name, std::string phone_num, int age, float month_sal,  std::string company_name, std::string department):
Employee(id, f_name, l_name, phone_num, age, month_sal, company_name, department)
{
    managing=people_managed;
}

void Manager::output()
{
    std::cout<<"Employee ID: "<<ID<<"\tCompany Name: " << company_name<<"\tManager of: "<<comp_department<<"\t People managed: "<<managing<<std::endl;
    std::cout<<"Name: "<< first_name<< " "<<last_name << "\tAge: "<<Age<< "\tMonth salary: "<<month_salary<<std::endl;
}

void Manager::calculate_year_income()
{
    float income=GetIncome();
    std::cout<<"Employee ID: "<<ID<<"\tYear income: "<<income<<"\tManager of: "<<comp_department<<std::endl;
}

void Manager::show_richest()
{
    float max=38000; //because managers have higher month salary
    float rich = GetIncome();
    
    if(rich>=max)
    {
        std::cout<<"--------------------------------------- Managers with income above 38K --------------------------------------- \n";
        std::cout<<"Employee ID: "<<ID<<"\tCompany Name: " << company_name<<std::endl;
        std::cout<<"Name: "<< first_name<< " "<<last_name <<"\tManager of: "<<comp_department<<"\tYear income: "<<rich<<std::endl;
        std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
    }
    else
    {
        return;
    }
}
