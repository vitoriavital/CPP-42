#include <iostream>
#include <string>
#include <fstream>

void write_content(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2) {
	std::string	line;
	std::size_t	replace_pos;
	std::size_t	pos;
	std::string	result;

	while (std::getline(infile, line)) {
		pos = 0;
		result.clear();
		while (1) {
			replace_pos = line.find(s1, pos);
			if (replace_pos != std::string::npos) {
				result += line.substr(pos, replace_pos - pos);
				result += s2;
				pos = replace_pos + s1.size();
			} else {
				result += line.substr(pos);
				break ;
			}
		}
		outfile << result << std::endl;
	}
}

void	replace(std::string file, std::string s1, std::string s2) {
	std::string	filename;

	std::ifstream infile (file.c_str());
	if (!infile) {
		std::cerr << "Error opening file: " << file << std::endl;
		return ;
	}
	filename = file + ".replace";
	std::ofstream outfile (filename.c_str());
	if (!outfile) {
		std::cerr << "Error creating outfile: " << filename << std::endl;
		return ;
	}
	write_content(infile, outfile, s1, s2);
	outfile.close();
	infile.close();
}

int	main(int argc, char *argv[])
{
	std::string	file;
	std::string	s1;
	std::string	s2;

	if (argc == 4)
	{
		file = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		replace(file, s1, s2);
	}
	else
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		std::cout << "Ex: ./replace filename string1 string2" << std::endl;
	}
	return 0;
}
