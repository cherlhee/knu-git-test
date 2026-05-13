#include <iostream>
#include <fstream>
using namespace std;


int main() {

	ofstream fout;

	fout.open("song.txt");
	if (!fout) {
		cout << "file opening of song.txt failed;";
		return 0;
	}


	int age = 21;
	char singer[] = "kim";
	char song[] = "yesterday";

	fout << age << '\n';
	fout << singer << endl;
	fout << song << endl;

	fout.close();


}