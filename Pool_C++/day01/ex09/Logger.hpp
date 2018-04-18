/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:47:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/04 12:47:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>

class Logger
{
public:
	Logger(std::string fileName);
	void			log(std::string const & dest, std::string const & message);

private:
	void			logToConsole(const std::string str);
	void			logToFile(const std::string str);
	std::string		makeLogEntry(const std::string str);
	std::string		_displayTimestamp(void);
	std::string		_fileName;
};


#endif
