/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:11:13 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/16 00:50:00 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "App.hpp"

void    printincolor(string str, int a)
{
    if (a)
	    cout << "\033[1;41m" << str <<"\033[0m" << endl;
    else
	    cout << "\033[1;41m" << str <<"\033[0m";
}

// static void show_details(vector<Godchild> &obj, int character)
// {
//     system("stty cooked");
//     obj[]
// }

// int	App::ft_change(vector<Godchild> &obj, int character)
// {
//     int start = 0;
//     (void) character;
// 	while(1)
// 	{
// 		system("stty cooked");
// 		system("clear");
// 		for (int i = 0; i < (int)obj.size() - 1; i++)
// 		{
// 			if (i == start)
// 			{
// 				printincolor(obj[0].notes[i]);
// 			}
// 			else
// 				cout << obj[0].notes[i] << endl;
// 		}
// 		system("stty raw");
// 		char chars = getchar();
// 			switch(chars) {
// 			case 119:// yukari.
// 				start--;
// 				break;
// 			case 115:// asagi.
// 				start++;
// 				break;
// 			case 13:				
// 				show_details(obj, start);
//                 exit(1);
// 				break;
// 			default:
// 				break;
// 		}
// 		system("stty cooked");
// 		if (start < 0)
// 			start = obj[0].notes.size() - 1;
// 		if (start > (int)obj[0].notes.size() - 1 )
// 			start = 0;
// 		system("clear");
		
// 	}
// 	return(0);
// }

int    App::ft_details(vector<Godchild> &obj, int character)
{
	int start = 0;

	while(1)
	{
		system("stty cooked");
		system("clear");
		for (int i = 0; i < (int)obj.size(); i++)
		{
			if (i == start)
			{
				printincolor(obj[0].notes[i],0);
                printincolor(": ",0);
                printincolor(obj[character].notes[i],1);
			}
			else
				cout << obj[0].notes[i] << ": " << obj[character].notes[i] << endl;
		}
		system("stty raw");
		char chars = getchar();
			switch(chars) {
			case 119:// yukari.
				start--;
				break;
			case 115:// asagi.
				start++;
				break;
			case 13:
		        system("stty cooked");
				cout << obj[character].notes[start] << endl;
				// ft_change(obj, start);
                exit(1);
				break;
			default:
				break;
		}
		system("stty cooked");
		if (start < 0)
			start = obj[0].notes.size() - 1;
		if (start > (int)obj[0].notes.size() - 1 )
			start = 0;
		system("clear");

	}
}

void	App::go_search_user( vector<Godchild> obj)
{
	int start = 0;
	while(1)
	{
		system("stty cooked");
		system("clear");
		for (int i = 0; i < (int)obj.size(); i++)
		{
			if (i == start)
			{
				printincolor(obj[i].notes[1],1);
			}
			else
				cout << obj[i].notes[1] << endl;
		}
		system("stty raw");
		char chars = getchar();
			switch(chars) {
			case 119:// yukari.
				start--;
				break;
			case 115:// asagi.
				start++;
				break;
			case 13:
				ft_details(obj, start);// details'e atiyor.
				break;
			default:
				break;
		}
		system("stty cooked");
		if (start < 0)
			start = obj.size() - 1;
		if (start > (int)obj.size() - 1 )
			start = 0;
		system("clear");
	}
}