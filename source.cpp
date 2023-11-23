#include "company.h"
#include "employees.h"
#include "managers.h"

int main()
{
    int choice;
    int workers_count=3;
    int id;
    int flag=0;

    //create  company employees
    Employee *employees[workers_count]; 
    employees[0]= new Employee(3345, "Tim",  "Smith", 35, 2500, "The Last Of Us .Inc", "HR");
    employees[1]= new Employee(3215, "John", "Cook", 26, 2200, "We<3Code Ltd.", "Engeneering");
    employees[2]= new Manager(12, 3205, "Toby", "Doe", 35, 3000, "We<3Code Ltd.", "Engeneering");



     while (1)
    {
        std::cout<<"----------------------- MENU -----------------------\n";
        std::cout<<"Do you wish to perform an operation? Choose a number between 0-7.\n";
        std::cout<<"1. Output data for the workers.\n";
        std::cout<<"2. Output data for one worker.\n";
        std::cout<<"3. Show year income for workers.\n";
        std::cout<<"0. Exit program.\n";

        std::cin>>choice;
        std::cin.ignore();

        if(choice == 0)
        {
            //deleting the dynamically allocated memory when instantiating employees and manager
            for(int i=0; i<workers_count; i++)
            {
                delete employees[i]; 
            }
            break;
        }

        switch (choice)
        {
        case 1:
            for(int i=0; i<workers_count; i++)
            {
                std::cout<<"----------------------- Outputting Data for employees ----------------------- \n";
                employees[i]->output();
                std::cout<<"----------------------------------------------------------------------------- \n\n";
                
            }
            break;
        case 2:
            std::cout<<"Enter employee ID: ";
            std::cin>>id;
            std::cin.ignore();
            std::cout<<"\n";

            for(int i=0; i<workers_count; i++)
            {
                if(id == employees[i]->ID)
                {
                    std::cout<<"----------------------- Outputting Data for employee ----------------------- \n";
                    employees[i]->output();
                    std::cout<<"----------------------------------------------------------------------------- \n\n";
                    flag=1;
                }
                    
            }
            if(flag == 0)
            {
                std::cout<<"Found NO employee with the given ID\n";
            }
            break;

        case 3:
            for(int i=0; i<workers_count; i++)
            {
                std::cout<<"----------------------- Year income for employees ----------------------- \n";
                employees[i]->calculate_year_income();
                std::cout<<"----------------------------------------------------------------------------- \n\n";
                
            }
            break;
        default:
            break;
        }
    }
}