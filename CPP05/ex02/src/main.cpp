
#include "../includes/Bureaucat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonFrom.hpp"

int main()
{
	try {
		Form *SCF = new ShrubberyCreationForm("home"); // form 145 137
		Bureaucat b1("Bob", 136);
        Bureaucat b2("Jhon", 145);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
	try {
        Form *SCF = new RobotomyRequestForm("home"); 
        Bureaucat b1("Bob2", 44);
        Bureaucat b2("Jhon2", 72);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	std::cout << std::endl;
    try {
        Form *SCF = new PresidentialPardonForm("ascii_tree");
        Bureaucat b1("Bob2", 5);
        Bureaucat b2("Jhon2", 24);
        b2.signForm(*SCF);
        b1.executeForm(*SCF);

        b2.executeForm(*SCF);
        delete SCF;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return (0);
}