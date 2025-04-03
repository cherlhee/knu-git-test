#include <iostream>
#include <fstream>
using namespace std;


int main() {



	char name[10], dept[20];
	int id;


	cout << "name; ";
	cin >> name;
	cout << "id; ";
	cin >> id;



	ofstream fout;
	fout.open("student.txt");
	
	if (!fout) {
		cout << "file opening of song.txt failed;";
		return 0;
	}


	//int age = 21;
	//char singer[] = "kim";
	//char song[] = "yesterday";


	fout << name << '\n';
	fout << id << endl;
	//fout << song << endl;

	fout.close();


}