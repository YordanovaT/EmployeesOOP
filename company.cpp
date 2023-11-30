#include "company.h"



Company::Company(std::string name)
{
    company_name = name;
    employees_count=0;

}

int Company::check_if_limit_reached()
{
    if(employees_count>50)
    {
        std::cout<<"Sorry, you have reached the limit of people. Try deleting some employee records.\n";
        return 0;
    }
    else
    {
        return 1; //we can proceed with adding new eployees to the system
    }
}

void Company::add_employee(Employee *employee)
{
    empl_arr[employees_count]=employee; //add the employee object to the array of employee objects
    employees_count++; //increment the count of employee objects;
}

void Company::delete_employee()
{
    int flag = 0;
    int id;

    std::cout<<"Enter employee ID: ";
    std::cin>>id;
    std::cin.ignore();

    if(employees_count == 0)
    {
        std::cout<<"\nSorry, there are no employee records. Try adding some.\n";
        return;
    }
    for(int i=0; i<employees_count; i++)
    {
        if(empl_arr[i]->ID == id)
        {
            empl_arr[i] = empl_arr[employees_count-1];
            employees_count--;
            flag = 1;
        }
    }

    if(!flag)
    {
        std::cout<<"Found NO employee with the given ID. Try again\n";
        return;
    }
}

void Company::print()
{
    std::cout<<"\t\t\t\t\tCompany name: "<< company_name<<"\n\n";
    std::cout<<"----------------------------------------------------------------------------------------------------------------\n";
    std::cout<<"----------------------------------------------------------------------------------------------------------------\n";
    for(int i=0; i<employees_count; i++)
    {
        empl_arr[i]->output();
    }
}

void Company::income_of_all_empl()
{
    for(int i=0; i<employees_count; i++)
    {
        empl_arr[i]->calculate_year_income();
        std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
    }
}

void Company::print_richest_employees()
{
     for(int i=0; i<employees_count; i++)
    {
        empl_arr[i]->show_richest();
    }
}

void Company::give_raise()
{
    int flag = 0;
    int id;
    float bonus_percent;

    std::cout<<"Enter employee ID: ";
    std::cin>>id;
    std::cin.ignore();

    for(int i=0; i<employees_count; i++)
    {
        if(empl_arr[i]->ID == id)
        {

            std::cout<<"Enter bonus percentage: ";
            std::cin>>bonus_percent;
            std::cin.ignore();
            empl_arr[i]->ask_for_bonus(bonus_percent);
            flag = 1;
        }
    }

    if(!flag)
    {
        std::cout<<"Found NO employee with the given ID. Try again\n";
        return;
    }
}

void Company::contact_info()
{
    for(int i=0; i<employees_count; i++)
    {
        empl_arr[i]->GetContactInfo();
        std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
    }
}

Company::~Company()
{
    for(int i=0; i<employees_count; i++)
    {
        delete empl_arr[i];
    }
}