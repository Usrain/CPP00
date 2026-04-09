/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:29:06 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/17 19:01:58 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "includes.hpp"
class PhoneBook
{
	private:
		int nb_contact;
		Contact Contacts[8];
		void add_contact(Contact toadd);
		void displayUser(Contact tod, int full);
	public:
		PhoneBook(void);
		void AddUser(void);
		void Search(void);
		int	get_nb_contact();
};
#endif
