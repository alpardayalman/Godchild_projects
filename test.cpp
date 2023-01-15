/* #include <fstream>
#include <iostream>
using namespace std;

int main() {
    int data[] = {1, 2, 3, 4, 5};
    ofstream myfile;
    myfile.open("example.csv");
    if (myfile.is_open()) {
        for (int i = 0; i < 5; i++) {
            myfile << data[i] ;
            if(i != 4) myfile << ";"; //to avoid ; after last value
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }
    ifstream myfile2("example.csv");
    return 0;

    ;index;name;surname;notes;
;0;emircan;kaymaz;offenna;
;1;alp;yalman;fenasiker;
;2;talha;acikgoz;mydickisbig;
}
 */
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> line;
    char* a = new char[15];
    ifstream myReadFile("new.csv");
    if (myReadFile.is_open()) {
        while (myReadFile.read(a, 10)) {
            line.push_back(a);
            cout << line.data() << endl;
        }
    }
    myReadFile.close();
    ofstream myWriteFile("new.csv");
    if (myWriteFile.is_open()) {
        myWriteFile.write(line[0].data(), line[0].length());
    }
    myWriteFile.close();
    return 0;
}