/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   App.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 03:11:03 by ardayalman        #+#    #+#             */
/*   Updated: 2023/01/16 00:46:01 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Godchild.hpp"
// #include <curses.h>
#define BACKGROUND_COLOR 40

using namespace std;
class App
{
	public:
		int		getNumInput();
		string	getStringInput();
		void	go_help( vector <Godchild> persons );
		void	go_spreadsheet( vector <Godchild> persons );
		void	go_add_user( vector <Godchild> persons );

		void	go_search_user( vector <Godchild> persons );
		int		ft_change(vector<Godchild> &obj, int character);
		int    	ft_details(vector<Godchild> &obj, int character);

		void	go_exit( vector <Godchild> persons );
		void	main_menu(vector <Godchild> persons);
		int		help_menu();
		int		spreadsheet_menu();
		int		add_user_menu();
		int		search_user_menu();
		int		exit_menu();
};

void	printincolor(string str, int a);

