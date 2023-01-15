/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   App.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 03:12:12 by ardayalman        #+#    #+#             */
/*   Updated: 2023/01/16 00:17:42 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "App.hpp"
#include <unistd.h>
#define BUG
#ifndef BUG
#define BUGS
#endif
using namespace std;

int	App::getNumInput()
{
	int	a;
	cin >> a;
	if (cin.fail())
	{
		cout << "Wrong Choice. Enter again " << endl;
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		return (-1);
	}
	return (a);
}

string	App::getStringInput()
{
	string str;
	cin.clear();
	fflush(stdin);
	getline(cin, str);
	return (str);
}

void	App::go_spreadsheet( vector <Godchild> persons )
{
	(void) persons;
	system("open https://docs.google.com/spreadsheets/d/1DUHfgcNckeIQccsA-KdO_YlWwX6J76GvvkHt_dLzTrA/edit#gid=0");
}

void	App::go_help( vector <Godchild> persons )
{
	(void) persons;
	system("clear");
	system("stty cooked");
	cout << "lorem ipsum" << endl;
	system("stty raw");
	if(getchar())
		return ;
}

void	App::go_exit( vector <Godchild> persons )
{
	(void) persons;
	system("clear");
	system("stty cooked");
	exit(EXIT_SUCCESS);
}

void	App::go_add_user( vector <Godchild> persons )
{
	(void) persons;
	system("clear");
	system("stty cooked");
	cout << "lorem ipsum" << endl;
	system("stty raw");
	if(getchar())
		return ;
}

int	App::help_menu()
{
	system("clear");
	system("stty cooked");
	cout << "\033[1;41mHelp\033[0m" << endl;
	cout << "Go to the spreadsheet" << endl;
	cout << "Add user" << endl;
	cout << "Search User" << endl;
	cout << "Exit" << endl;
	return (1);
}

int	App::spreadsheet_menu()
{
	system("clear");
	system("stty cooked");
	cout << "Help" << endl;
	cout << "\033[1;41mGo to the spreadsheet\033[0m" << endl;
	cout << "Add user" << endl;
	cout << "Search User" << endl;
	cout << "Exit" << endl;
	return (1);
}

int	App::add_user_menu()
{
	system("clear");
	system("stty cooked");
	cout << "Help" << endl;
	cout << "Go to the spreadsheet" << endl;
	cout << "\033[1;41mAdd user\033[0m" << endl;
	cout << "Search User" << endl;
	cout << "Exit" << endl;
	return (1);
}

int	App::search_user_menu()
{
	system("clear");
	system("stty cooked");
	cout << "Help" << endl;
	cout << "Go to the spreadsheet" << endl;
	cout << "Add user" << endl;
	cout << "\033[1;41mSearch User\033[0m" << endl;
	cout << "Exit" << endl;
	return (1);
}

int	App::exit_menu()
{
	system("clear");
	system("stty cooked");
	cout << "Help" << endl;
	cout << "Go to the spreadsheet" << endl;
	cout << "Add user" << endl;
	cout << "Search User" << endl;
	cout << "\033[1;41mExit\033[0m" << endl;
	return (1);
}

void	App::main_menu(vector <Godchild> persons)
{
	App a;
	int (App::*function[5])() =
	{
		&App::help_menu,
		&App::spreadsheet_menu,
		&App::add_user_menu,
		&App::search_user_menu,
		&App::exit_menu
	};
	void (App::*go_function[5])(vector <Godchild>) =
	{
		&App::go_help,
		&App::go_spreadsheet,
		&App::go_add_user,
		&App::go_search_user,
		&App::go_exit
	};

	int start = 0;
	this->help_menu();
	while(true)
	{
		system("stty raw");
		char chars = getchar();
#ifdef BUGS
		cout << int (chars) << endl;
		usleep(3000000);
#endif
		switch(chars) {
			case 119:// yukari.
				start--;
				break;
			case 115:// asagi.
				start++;
				break;
			case 13:
				(a.*go_function[start])(persons);
				break;
			default:
				break;
		}
		if (start < 0)
			start = 4;
		if (start > 4)
			start = 0;
		(a.*function[start])();// yuh amk.
	}
}

/*
1- chose what menu will consist of.
Help
Goto Spreadsheet
Add User
Search User
2- write void code and in color. Everytime its used it has to call system("clear");
3- get them in an array of functions and if pressed enter go to that menu.
*/