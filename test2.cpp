#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

class person
{

	public:
		vector<string> notes;
		friend	ostream &operator<<(ostream &os, const person &obj);
		void ft_search(vector<person> obj);
		void printincolor(string str);
		int ft_details(vector<person> &obj, int start);
		int ft_change(vector<person> &obj, int character);
};

ostream &operator<<(ostream &os, const person &obj)
{
	os << "index: " << obj.notes[0] << "\nname: " << obj.notes[1] << "\nsurname: " << obj.notes[2] << "\nnotes: " << obj.notes[3] << endl;
	return (os);
}


void    person::printincolor(string str)
{
	cout << "\033[1;41m" << str <<"\033[0m" << endl;
}

int	person::ft_change(vector<person> &obj, int character)
{
int start = 0;
	while(1)
	{
		system("stty cooked");
		system("clear");
		for (int i = 0; i < obj.size(); i++)
		{
			if (i == start)
			{
				printincolor(obj[0].notes[i]);
			}
			else
				cout << obj[0].notes[i] << endl;
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
				return(1);
				break;
			default:
				break;
		}
		system("stty cooked");
		if (start < 0)
			start = obj[0].notes.size() - 1;
		if (start > obj[0].notes.size() - 1 )
			start = 0;
		system("clear");
		
	}
	return(0);
}

int    person::ft_details(vector<person> &obj, int character)
{
	int start = 0;
	while(1)
	{
		system("stty cooked");
		system("clear");
		for (int i = 0; i < obj.size(); i++)
		{
			if (i == start)
			{
				printincolor(obj[0].notes[i]);
			}
			else
				cout << obj[0].notes[i] << endl;
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
				cout << obj[character].notes[start] << endl;
				if(ft_change(obj, start))
					ft_search(obj);
				exit (1);
				break;
			default:
				break;
		}
		system("stty cooked");
		if (start < 0)
			start = obj[0].notes.size() - 1;
		if (start > obj[0].notes.size() - 1 )
			start = 0;
		system("clear");

	}
}

void    person::ft_search(vector<person> obj)
{
	int start = 0;
	while(1)
	{
		system("stty cooked");
		system("clear");
		for (int i = 0; i < obj.size(); i++)
		{
			if (i == start)
			{
				printincolor(obj[i].notes[1]);
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
				ft_details(obj, start);
				break;
			default:
				break;
		}
		system("stty cooked");
		if (start < 0)
			start = obj.size() - 1;
		if (start > obj.size() - 1 )
			start = 0;
		system("clear");


	}

}
// -> tum adlar gerek [1];
// -> 



int main() {
	string line;
	ifstream myReadFile("example.csv");
	vector<person> persons;
	if (myReadFile.is_open()) {
		for (int index = 0; getline(myReadFile, line); index++) {
			person a;
			for (int i = 0, j = 0; line[j]; j++)
			{
				if (line[j] == ';' && j != 0)
				{
					a.notes.push_back(line.substr(i+1,j-i-1));
					i = j;
				}
			}
			persons.push_back(a);
		}
		
	}
	myReadFile.close();
	persons[1].ft_search(persons);
	return 0;
}