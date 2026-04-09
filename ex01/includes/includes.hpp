/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:51:45 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/17 17:27:59 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <limits>
# include <cctype>
# include <cstdlib>
# include "Contact.hpp"
# include "PhoneBook.hpp"
std::string truncate(std::string totrunc);
std::string get_non_empty_string(std::string prompt);
#endif
