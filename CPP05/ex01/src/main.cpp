#include "../includes/Bureaucat.hpp"
#include "../includes/Form.hpp"


int	main(void) {

	Bureaucat	*soLove;
	Form		*form;

	std::cout << "\n-------------Asigned---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucat("Mouad", 4);
		std::cout << *soLove << std::endl;
		form = new Form("form", 6, 15);
		std::cout << *form << std::endl;
		form->sign(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
		std::cout << "\n" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}
	std::cout << "\n-------------Form low---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucat("Mouad", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 333, 87);
		std::cout << "\n" << std::endl;
		std::cout << *form << std::endl;
		form->sign(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-------------Form high---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucat("Mouad", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 0, 87);
		std::cout << "\n" << std::endl;
		std::cout << *form << std::endl;
		form->sign(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-------------Form high to Bureaucrat---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucat("Mouad", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 1, 87);
		std::cout << *form << std::endl;
		form->sign(*soLove);
		std::cout << "\n" << std::endl;
		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}

    std::cout << "\n-------------Form high to Bureaucrat signForm---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucat("Mouad", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 1, 87);
		std::cout << *form << std::endl;
		soLove->signForm(*form);
		std::cout << "\n" << std::endl;
		form->sign(*soLove);
		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}
    
    std::cout << "\n-------------SignForm---------------\n" << std::endl;
	try {
    	soLove = new Bureaucat("Mouad", 3);
    	std::cout << *soLove << std::endl;
    	form = new Form("form", 7, 87);
		form->sign(*soLove);
    	soLove->signForm(*form);
		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}
	return (0);
}
