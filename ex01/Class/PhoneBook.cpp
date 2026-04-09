/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:10:58 by malebrun          #+#    #+#             */
/*   Updated: 2026/04/01 18:36:40 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

PhoneBook::PhoneBook()
{
	nb_contact = 0;
}
void PhoneBook::add_contact(Contact toadd)
{
	this->Contacts[toadd.get_index()] = toadd;
	if (this->nb_contact < 8)
		this->nb_contact++;
}

int PhoneBook::get_nb_contact()
{
	return (this->nb_contact);
}
void PhoneBook::AddUser()
{
	std::string fn = get_non_empty_string("first name ?");
	std::string ln = get_non_empty_string("last name ?");
	std::string nm = get_non_empty_string("nickname ?");
	std::string pn = get_non_empty_string("phone number ?");
	std::string ds = get_non_empty_string("darkest secret?");
	Contact temp(fn, ln, nm, pn, ds);
	this->add_contact(temp);
}

void PhoneBook::displayUser(Contact tod, int full)
{
	if (tod.get_index() == -1)
	{
		std::cout << "No contact with this id" << std::endl;
		return ;
	}
	std::cout << std::right
			<< std::setw(10) << tod.get_index() << "|"
			<< std::setw(10) << truncate(tod.get_fn()) << "|"
			<< std::setw(10) << truncate(tod.get_ln()) << "|"
			<< std::setw(10) << truncate(tod.get_nm());
	if (full)
	{
		std::cout << std::right
				<< "|"
				<< std::setw(10) << truncate(tod.get_pn()) << "|"
				<< std::setw(10) << truncate(tod.get_ds());
	}
	std::cout << std::endl;
}

void PhoneBook::Search(void)
{
	int i = 0;

	if (this->get_nb_contact() == 0)
	{
		std::cout << "no registered contact" << std::endl;
		return ;
	}
	std::cout << std::right
			<< std::setw(10) << "index" << "|"
			<< std::setw(10) << "first name" << "|"
			<< std::setw(10) << "last name" << "|"
			<< std::setw(10) << "nickname" << std::endl;
	while (i < this->get_nb_contact())
	{
		this->displayUser(this->Contacts[i], 0);
		i++;
	}
	std::cout << "Enter Index : ";
	if (!(std::cin >> i))
	{
		std::cout << "this is not a number" << std::endl;
		std::cin.clear();
		return ;
	}
	if (i < 0 || i >= this->nb_contact)
	{
		std::cout << "there is no one with this index" << std::endl;
		return ;
	}
	std::cout << std::right
			<< std::setw(10) << truncate("index") << "|"
			<< std::setw(10) << truncate("first name") << "|"
			<< std::setw(10) << truncate("last name") << "|"
			<< std::setw(10) << truncate("nickname") << "|"
			<< std::setw(10) << truncate("phone number") << "|"
			<< std::setw(10) << truncate("darkest secret") << std::endl;
	this->displayUser(this->Contacts[i], 1);
}
