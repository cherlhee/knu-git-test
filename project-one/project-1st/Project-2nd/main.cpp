#include <iostream>
using namespace std;

class Clients {
	int id;
	string name;
	string address;
	string phone;

public:
	Clients();
	void insertClient(int newId, string newName);
	void displayClient();

};

Clients::Clients() {}

void Clients::insertClient(int newId, string newName) {
	this->id = newId;
	this->name = newName;

}

void Clients::displayClient() {
	cout << "client id; " << id << ", name: " << name << endl;
}








int main() {

	Clients client;

	int id;
	string name;


	cout << "plz input id; ";
	cin >> id ;
	cout << "plz input name; ";
	cin >> name;


	client.insertClient(id, name);


	cout << "hello,	project 2nd;" << endl;
	client.displayClient();


	return 0;
}