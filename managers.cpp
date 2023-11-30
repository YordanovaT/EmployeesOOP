#include "managers.h"

Manager::Manager():Employee()
{
    int people_managed;

    std::cout<<"\nHow many people are managed by " <<first_name<< " " <<last_name<<"?\n";
    std::cin>>people_managed;
    std::cin.ignore();
    managing=people_managed;
}

Manager::~Manager()
{

}

void Manager::output()
{
    std::cout<<"Employee ID: "<<ID<<"\tManager of: "<<department<<" Department"<<"\nPeople managed: "<<managing;
    std::cout<<"\tName: "<< first_name<< " "<<last_name << "\tAge: "<<Age<< "\tMonth salary: "<<month_salary<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------------------------------\n";
    std::cout<<"----------------------------------------------------------------------------------------------------------------\n";
}

void Manager::calculate_year_income()
{

    std::cout<<"Employee ID: "<<ID<<"\tYear income: "<<year_income<<"\tManager of: "<<department<<std::endl;
}

void Manager::show_richest()
{
    float max=40000; //because managers have higher month salary
    
    if(year_income>=max)
    {
        std::cout<<"--------------------------------------- Managers with income above 40K --------------------------------------- \n";
        std::cout<<"Employee ID: "<<ID<<"\tName: "<< first_name<< " "<<last_name;
        std::cout<<"\tManager of: "<<department<<"\tYear income: "<<year_income<<std::endl;
        std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
    }
    else
    {
        return;
    }
}

void Manager::ask_for_bonus(float percent)
{
    float pay=GetIncome();
    float bonus= pay*(1+percent+0.10); // managers will have bigger bonuses
    year_income=bonus;;
    
    std::cout<<"Manager's Year income: "<<year_income<<std::endl;
}
