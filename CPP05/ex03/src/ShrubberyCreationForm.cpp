#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137){
	this->_target = "None";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = obj._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj){
	this->_target = obj._target;
	return (*this);	
}


void	ShrubberyCreationForm::action() const
{
	std::ofstream outFile(this->_target + "_shrubbery");
	if (!outFile)
	{
		std::cerr << "can't open/create" << this->_target + "_shrubbery" << std::endl;
		return;
	}
	outFile << "               _-_\n"
			   "	    /~~   ~~\\        \n"
			   "	 /~~         ~~\\     \n"
			   "	{               }     \n" 
			   "	 \\\\  _-     -_  /   \n"
			   "	   ~  \\\\ //  ~      \n"
			   "	_- -   | | _- _       \n"
			   "	  _ -  | |   -_       \n"
			   "	      // \\\\\n" << std::endl;
}

Form *ShrubberyCreationForm::clone(std::string _target)
{
	return (new ShrubberyCreationForm(_target));
}