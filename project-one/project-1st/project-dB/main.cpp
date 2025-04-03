#include <iostream>
using namespace std;

class Clients {
	int id;
	string name;
	string address;
	string tel;

public:
	Clients();
	void insertClient(int newId, string newName, string newTel, string newAddress);
	void displayClient();

};

Clients::Clients() {}



void Clients::insertClient(int newId, string newName, string newTel, string newAddress) {
	this->id = newId;
	this->name = newName;
	this->tel = newTel;
	this->address = newAddress;

}

void Clients::displayClient() {
	cout << "client id; " << id << ", name: " << name;
	cout << "client tel; " << tel << ", address; " << address << endl;
}








int main() {



	int id;
	string name, tel, address;
	const int maxnumClient = 2;


	Clients client[maxnumClient];



	for (int i = 0; i < maxnumClient; i++) {
		cout << "plz input id; ";
		cin >> id;
		cout << "plz input name; ";
		cin >> name;
		cout << "plz input tel; ";
		cin >> tel;
		cout << "plz input address; ";
		cin >> address;

		client[i].insertClient(id, name, tel, address);
	}






	cout << "\n ------ hello,	client display ------ \n";

	for (int i = 0; i < maxnumClient; i++) {
		client[i].displayClient();
	}


	return 0;
}