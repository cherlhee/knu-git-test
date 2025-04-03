#include <iostream>
using namespace std;




class Menus{

public:
	Menus();
	int display();
};


Menus::Menus() {}

int Menus::display() {
	
	int selection;

	cout << "menu" << endl;
	cout << "--------------------------------" << endl;
	cout << "1. insert clients" << endl;
	cout << "2. delete clients" << endl;
	cout << "3. display clients" << endl;
	cout << "4. list clients" << endl;
	cout << "--------------------------------" << endl;
	cout << "please input selections (1~4); " ;

	cin >> selection;

	return selection;
}






int main() {


	Menus menu;
	menu.display();


	return 0;
}