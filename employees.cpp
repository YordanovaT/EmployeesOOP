#include "employees.h"

Employee::~Employee()
{
    
}

Employee::Employee()
{
    int id, age; float month_sal;
    std::string f_name, l_name, phone_num, dep;

    std::cout<<"Enter employee's  ID: ";
    std::cin>>id;
    std::cin.ignore();

    std::cout<<"\nEnter employee's first name: ";
    std::cin>>f_name;
    std::cin.ignore();

    std::cout<<"\nEnter employee's last name: ";
    std::cin>>l_name;
    std::cin.ignore();

    std::cout<<"\nEnter employee's phone: ";
    std::cin>>phone_num;
    std::cin.ignore();

    std::cout<<"\nEnter employee's age: ";
    std::cin>>age;
    std::cin.ignore();
    
    std::cout<<"\nEnter employee's month salary: ";
    std::cin>>month_sal;
    std::cin.ignore();

    std::cout<<"\nEnter employee's department: ";
    std::cin>>dep;
    std::cin.ignore();

    ID=id;
    first_name = f_name;
    last_name= l_name;
    phone=phone_num;
    Age=age;
    month_salary=month_sal;
    department=dep;

    email=first_name + "." + last_name + "@mail.com";
    year_income=month_salary*12;
    bonus_percentage=0;
}

float Employee::GetIncome()
{
    return year_income;
}

void Employee::GetContactInfo()
{
    std::cout<<"Name: "<< first_name<< " "<<last_name <<std::endl;
    std::cout<<"Email: "<<email<< "\tPhone: "<<phone<<std::endl;
}

void Employee::calculate_year_income()
{
    float sum=GetIncome();
    year_income=sum;
    std::cout<<"Employee ID: "<< ID<<"\tYear income: "<< year_income <<"\tDepartment: "<<department<<std::endl;
}

void Employee::output()
{
    std::cout<<"Employee ID: "<<ID<<"\tDepartment: "<<department<<std::endl;
    std::cout<<"Name: "<< first_name<< " "<<last_name << "\tAge: "<<Age<< "\nMonth salary: "<<month_salary<<std::endl;
    std::cout<<"----------------------------------------------------------------------------------------------------------------\n";
    std::cout<<"----------------------------------------------------------------------------------------------------------------\n";
}

void Employee::show_richest()
{
    float max=30000;
    
    if(year_income>=max)
    {
        std::cout<<"--------------------------------------- Employees with income above 30K --------------------------------------- \n";
        std::cout<<"Employee ID: "<<ID<<"\tName: "<< first_name<< " "<<last_name;
        std::cout<<"\tDepartment: "<<department<<"\tYear income: "<< year_income<<std::endl;
        std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";

    }

}

void Employee::ask_for_bonus(float percent)
{
    float pay=GetIncome();
    bonus_percentage=percent;
    float bonus= pay*(1+bonus_percentage);
    year_income=bonus;
    std::cout<<"Year income after bonus: "<<year_income<<std::endl;
}