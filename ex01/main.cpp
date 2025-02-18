/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:14:52 by aborges           #+#    #+#             */
/*   Updated: 2025/02/18 17:57:10 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> //setw
#include <ctype.h> //isdigit
#include <readline/history.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <string.h>

int	ft_count(char **str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_contact
{
	int	indice;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone_number;
	std::string secret_more_black;
}	t_contact[2]; //*************** nao esquecer de por 8

class Contact
{
	public:
		void add(int i)
		{
			if ((i + 1) > 2)
			{
				std::cout << "\n	**WE ARE TO REPLACE THIS NEW CONTACT FOR OLD!**\n" << std::endl;
				char *conf = readline("\n**ARE YOU SHURE 1 - 0 (YES / NO)!?**");
				if (atoi(conf) == 1)
				    i = 0;
				else
					return ;
			}
			std::cout << "\n	**ADD NEW CONTACT!**" << std::endl;
			t_contact[i].indice = i;
			t_contact[i].firstname = readline("-_Digit your name: ");
			if (t_contact[i].firstname.empty())
				message(), add(i);
			t_contact[i].lastname = readline("-_Digit your lastname: ");
			if (t_contact[i].lastname.empty())
				message(), add(i);
			t_contact[i].nickname = readline("-_Digit your nickname: ");
			if (t_contact[i].nickname.empty())
				message(), add(i);
			t_contact[i].phone_number = readline("-_Digit your phone_number: ");
			if (t_contact[i].phone_number.empty()) //checar se eh numero ou nao
				message(), add(i);
			t_contact[i].secret_more_black = readline("-_Digit your secret_more_black: ");
			if (t_contact[i].secret_more_black.empty())
				message(), add(i);
		}
		std::string new_string(std::string str)
		{
		    if (str.length() > 10)
		        return str.substr(0, 10) + ".";
		    return str;
		}
		void search(int i)
		{
			std::cout << "\n	**SEARCHING NEW CONTACT!**" << std::endl;

			std::cout << std::setw(10) << new_string("ALL INDICE") << "|"
			<< std::setw(10) << new_string(" FIRSTNAME") << "|"
			<< std::setw(10) << new_string("  LASTNAME") << "|"
			<< std::setw(10) << new_string("  NICKNAME") << "" << std::endl;
			for (int k = 0; k < i; k++)
			{
				std::cout << std::setw(10) << t_contact[k].indice << "|"
                << std::setw(10) << new_string(t_contact[k].firstname) << "|"
                << std::setw(10) << new_string(t_contact[k].lastname) << "|"
                << std::setw(10) << new_string(t_contact[k].nickname) << std::endl;
			}
			std::cout << "\n" << std::endl;
			char *search_incide = readline("\n**PLEASE! INSERT A NEW INDICE FOR SEARCH: ");
			for (int k = 0; k < i; k++)
			{
				if (atoi(search_incide) == t_contact[k].indice)
				{
					std::cout << "INDICE: " << t_contact[k].indice << std::endl;
	                std::cout << "FIRST NAME: " << t_contact[k].firstname << std::endl;
	                std::cout << "LAST NAME: " << t_contact[k].lastname << std::endl;
	                std::cout << "MICK NAME: " << t_contact[k].nickname << std::endl;
	                std::cout << "PHONE NUMBER: " << t_contact[k].phone_number << std::endl;
	                std::cout << "BALCK SECRET: " << t_contact[k].secret_more_black << std::endl;
	                break ;
				}
				else
				{
					std::cout << "\n	**THE INDICE NOT FOUND!**" << std::endl;
					break ;
				}
			}
		}

	private:
		void	message()
		{
			std::cout << "*space can't be null" << std::endl;
			return ;
		}
};

class PhoneBook
{
	public:
		void book()
		{
			Contact contact;
			char 	*cmd;
			int		i = 0;

			while (1)
			{
				cmd = readline("\n**CHOOSE A OPTION**\n");
				if (strcmp(cmd, "ADD") == 0)
				{
					contact.add(i);
					i++;
				}
				else if (strcmp(cmd, "SEARCH") == 0)
					contact.search(i);
				else if (strcmp(cmd, "EXIT") == 0)
					exit(0);
				else
					std::cout << "Invalid option: " << cmd << std::endl;
				add_history(cmd);
				free(cmd);
			}
		}
	private:
};


void menu()
{
	printf("\n########## MENU #########\n");
	printf("ADD    => FOR ADD CONTACT\n");
	printf("SEARCH => FOR SEARCH CONTACT\n");
	printf("EXIT   => FOR EXIT PROGRAM\n\n");
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	PhoneBook phone;

	menu();
	phone.book();
	return 0;
}
