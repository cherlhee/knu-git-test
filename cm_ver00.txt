#include <iostream>
using namespace std;


class Client {
public:
	int id;
	string name;
	double attendance;
public:
	Client(int i, string n, double a) {
		id = i;
		name = n;
		attendance = a;
	}
};

class Clientmanager {
	Client* clientlist[10];
	int size = 0;
	int numclient = 0;
public:
	void showClientlist();
	void addClient(Client* c);

};


void Clientmanager::addClient(Client* c) {
	clientlist[numclient++] = c;
}

void Clientmanager::showClientlist() {
	for (int i = 0; i < numclient; i++) {
		cout << clientlist[i]->id << endl;
		cout << clientlist[i]->name << endl;
		cout << clientlist[i]->attendance << endl;
	}

}


int main() {
	Clientmanager cm;

	cm.showClientlist();

	//to add client;
	cm.addClient(new Client(1, "cherlhee", 100));

	cm.showClientlist();

	return 0;
}