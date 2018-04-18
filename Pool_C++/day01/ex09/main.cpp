/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:46:25 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/04 12:46:27 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger logger("myFile.txt");

	logger.log("logToConsole", "simple text 1");
	logger.log("logToFile", "simple text 2");
	return (0);
}