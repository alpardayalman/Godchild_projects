#include "file_in_out.hpp"

#define DENOM ";"
string  person::_notes_combiner_(vector<string> _note) {
	string oss = DENOM;
	for (int i=0; i < (int)_note.size(); i++) {
		oss += _note[i];
		oss += DENOM;
	}
	oss += "\n";
	return oss;
}

vector<person>    take_input_from_csv() {
	string line;
	ifstream myReadFile("new.csv");
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
	return persons;
}

void    set_data_to_csv(vector<person>& persons) {
	ofstream file("new2.csv");

	file.write("", 0);
	file.flags(ofstream::app | ofstream::out);
	for (int i=0; i < (int)persons.size(); i++) {
		string my = persons[i]._notes_combiner_(persons[i].notes);
		file.write(my.data(), my.length());
	}
	file.close();
}
