#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45){
	this->_target = "None";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 72, 45){
	this->_target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	this->_target = obj._target;
	return *this;
}

void	RobotomyRequestForm::action() const
{
	srand((long) this);
    if (rand() & 1) {
        std::cout << "LLLZZzz...." << std::endl;
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
    }
    else {
        std::cout << this->_target << " robotomy failed." << std::endl;
    }
}

Form * RobotomyRequestForm::clone(std::string _target)
{
    return new RobotomyRequestForm(_target);
}