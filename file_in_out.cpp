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



/*
ifstream kutuphanesini kullanarak csv dosyasindan satir satir okuyup, person class'inin icindeki notes string vectorune dolduruyor
*/
vector<person>    take_input_from_csv(string filename) {
	string line;
	ifstream file(filename);//default flaglerle dosyayi aciyor
	vector<person> persons;

	if (file.is_open()) {
		for (int index = 0; getline(file, line); index++)//file'dan line'a input aliyor
		{
			person a;
			for (int i = 0, j = 0; line[j]; j++)
			{
				if (line[j] == ';' && j != 0)//';'dan ayiriyor
				{
					a.notes.push_back(line.substr(i+1,j-i-1));//line'i notes'a ekliyor
					i = j;
				}
			}
			persons.push_back(a);//a'yi personun arkasina ekliyor
		}
	}
	file.close();//dosyayi closeluyor
	return persons;
}

/*
csv dosyasini sifirlayip personun icindeki notes vectorundeki stringleri birlestirdikten sonra csv dosyasinin icine yazar
*/
void    set_data_to_csv(vector<person>& persons, string filename) {
	ofstream file(filename);

	file.write("", 0);
	file.flags(ofstream::app | ofstream::out);
	for (int i=0; i < (int)persons.size(); i++) {
		string my = persons[i]._notes_combiner_(persons[i].notes);
		file.write(my.data(), my.length());
	}
	file.close();
}
