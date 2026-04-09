/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:39:51 by malebrun          #+#    #+#             */
/*   Updated: 2026/04/01 18:34:02 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

std::string truncate(std::string totrunc)
{
	if (totrunc.size() > 10)
	{
		return (totrunc.substr(0, 9) + ".");
	}
	return (totrunc);
}

std::string get_non_empty_string(std::string prompt)
{
	std::string ret;
	int	valid;

	valid = 0;
	while (!valid)
	{
		std::cout << prompt;
		std::cin >> ret;
		valid = ret.length();
	}
	return (ret);
}

int main()
{
	std::string user_input;
	int			status;
	PhoneBook	MyPb;

	status = 1;
	while (status)
	{
		std::cout << "Enter ADD, SEARCH or EXIT : ";
		std::cin >> user_input;
		if (user_input == "ADD")
			MyPb.AddUser();
		else if (user_input == "SEARCH")
			MyPb.Search();
		else if (user_input == "EXIT")
			status = 0;
	}
}
