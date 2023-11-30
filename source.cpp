#include "company.h"
#include "employees.h"
#include "managers.h"

int main()
{
    int choice;
    int flag=0;
    
    std::string comp_name;

    std::cout<<"Enter company name: ";
    std::cin>>comp_name;
    std::cin.ignore();

    //create class instances

    Company comp(comp_name);
    Employee *emp=0;
    Manager *mg=0; 
    



     while (1)
    {
        std::cout<<"\n--------------------------------------- MENU --------------------------------------- \n";
        std::cout<<"Do you wish to perform an operation? Choose a number between 0-8.\n";
        std::cout<<"1. Add an employee.\n";
        std::cout<<"2. Add a manager.\n";
        std::cout<<"3. Print employees data.\n";
        std::cout<<"4. Show year income for workers.\n";
        std::cout<<"5. Employees with income above 30K and managers with income above 40K.\n";
        std::cout<<"6. Get contact information for employees.\n";
        std::cout<<"7. Ask for bonus.\n";
        std::cout<<"8. Delete an employee or a manager.\n";
        std::cout<<"0. Exit program.\n";

        std::cin>>choice;
        std::cin.ignore();

        if(choice == 0)
        {
            break;
        }

        switch (choice)
        {
        case 1:

            std::cout<<"--------------------------------------------- Add new employee --------------------------------------------- \n";
            emp=new Employee();
            comp.add_employee(emp);
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
                
            break;
        case 2:

            std::cout<<"---------------------------------------------- Add new manager ---------------------------------------------- \n";
            mg= new Manager();
            comp.add_employee(mg);
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
            
            break;
        
        case 3:
            
            std::cout<<"--------------------------------------- Outputting Data for employees --------------------------------------- \n";
            comp.print();
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
                
            break;

        case 4:

            std::cout<<"--------------------------------------- Year income for employees ------------------------------------------- \n";
            comp.income_of_all_empl();
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
            break;

        case 5:
            comp.print_richest_employees();
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";   
            break;

        case 6:

            std::cout<<"------------------------------------ Contact information for employees ---------------------------------------- \n";
            comp.contact_info();
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";                
            
            break;

        case 7:

            std::cout<<"---------------------------------------- Ask for bonus for employee ----------------------------------------\n";
            comp.give_raise();
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
            
            break;

        case 8:

            std::cout<<"-------------------------------------- Delete an employee or a manager --------------------------------------\n";
            comp.delete_employee();
            std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
            
            break;

        default:
            break;
        }
    }
}