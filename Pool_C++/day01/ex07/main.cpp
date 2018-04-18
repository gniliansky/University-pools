/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 18:43:04 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 18:43:12 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

int		main(int argc, char **argv)
{
	std::ifstream	fin;
	std::ofstream	fout;
	std::string		s1;
	std::string		s2;
	std::string		filename;
	std::string		buff;
	struct stat 	fstat;

	if (argc != 4) {
		std::cout << "usage: " << argv[0];
		std::cout << " file <string_1> <string_2>" << std::endl;
	}
	else {
		filename = argv[1];
		fin.open(argv[1]);
		if (!fin.is_open()) {
			std::cout << "File not exist!" << std::endl;
			return (0);
		}
		stat(filename.data(), &fstat);
		if (fstat.st_mode & S_IFDIR) {
			std::cout << "Its a directory" << std::endl;
			return (0);
		}
		s1 = argv[2];
		s2 = argv[3];
		filename += ".replace";
		fout.open(filename);
		if (fout.fail()) {
			std::cout << "Problem with creating file" << std::endl;
			return (0);
		}
		while (std::getline(fin, buff)) {
			while (buff.find(s1) != std::string::npos) {
				buff.replace(buff.find(s1), s1.size(), s2);
			}
			fout << buff;
			fout << std::endl;
		}
		fin.close();
		fout.close();
	}
	return (0);
}