/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:47:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/04 12:47:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string	fileName) : _fileName(fileName)
{
	return ;
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	const std::string	arr[] = {"logToConsole", "logToFile"};
	void	(Logger::*f[])(const std::string) = {&Logger::logToConsole, &Logger::logToFile};

	for (int i = 0; i < 2; i++) {
		if (arr[i] == dest) {
			(this->*f[i])(message);
		}
	}
}

void	Logger::logToConsole(const std::string str)
{
	std::string		buff = this->makeLogEntry(str);

	std::cout << buff << std::endl;
	return ;
}

void	Logger::logToFile(const std::string str)
{
	std::ofstream	fout;
	std::string		buff = this->makeLogEntry(str);

	fout.open(_fileName);
	if (!fout.is_open()) {
		std::cout << "File don't created" << std::endl;
		return;
	}

	fout << buff << std::endl;
}

std::string	Logger::makeLogEntry(const std::string str)
{
	std::string result;
	result = this->_displayTimestamp() + str;
	return (result);
}

std::string	Logger::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [16];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::string result = "[";
	result += buffer;
	result +=  "] ";
	return (result);
}