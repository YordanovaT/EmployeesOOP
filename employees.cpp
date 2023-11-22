#include "employees.h"

Employee::Employee()
{
    ID=0;
    first_name="Not set";
    last_name= "Not set";
    Age=0;
    month_salary=0;
    
}

Employee::Employee(int id, std::string f_name, std::string l_name, int age, float month_sal,  std::string company_name,  std::string department)
:Company(company_name, department)
{
    ID=id;
    first_name = f_name;
    last_name= l_name;
    Age=age;
    month_salary=month_sal;
}

void Employee::calculate_year_income()
{
    float sum=0;
    sum=month_salary*12;
    year_income=sum;
    std::cout<<"Employee ID: "<< ID<<"\tYear income: "<< year_income<<std::endl;
}

void Employee::output()
{
    std::cout<<"Company Name: " << company_name<<"\tDepartment: "<<comp_department<<std::endl;
    std::cout<<"Name: "<< first_name<< " "<<last_name << "\tAge: "<<Age<< "\nMonth salary: "<<month_salary<<std::endl;
}
