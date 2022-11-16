#include <iostream>
#include <string>
#include <fstream>


int	throwError(int errorCode)
{
	if (errorCode == 1)
		std::cout << "Wrong ammount of args!" << std::endl;
	if (errorCode == 2)
		std::cout << "Error while opening files!" << std::endl;
	return (errorCode);
}

int	main(int argc, char **argv)
{
	std::ifstream 	infile;
	std::ofstream 	outfile;
	std::size_t		begin = 0;
	std::string		s1, s2, newOutfile, line;

	if (argc != 4)
		return (throwError(1));
	newOutfile.append(argv[1]);
	newOutfile.append(".replace");
	infile.open(argv[1]);
	outfile.open(newOutfile);
	if (!outfile.is_open() || !infile.is_open())
		return (throwError(2));
	s1 = argv[2];
	s2 = argv[3];
	while (getline(infile, line))
	{
		begin = 0;
		while (begin < line.npos)
		{
			begin = line.find(s1, begin+s2.length());
			if (begin != line.npos)
			{
				line.erase(begin, s1.length());
				line.insert(begin, s2);
			}
		}
		outfile << line << '\n';

	}
	infile.close();
	outfile.close();
	return (0);
}