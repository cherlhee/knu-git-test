#include <iostream>
#include <fstream>
#include <sstream>

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
    void saveToCSV(ofstream& file);
};





Clients::Clients() {}

void Clients::insertClient(int newId, string newName, string newTel, string newAddress) {
    this->id = newId;
    this->name = newName;
    this->tel = newTel;
    this->address = newAddress;
}

void Clients::displayClient() {
    cout << "Client ID: " << id << ", Name: " << name
        << ", Tel: " << tel << ", Address: " << address << endl;
}

// Save client details to a CSV file (append mode)
void Clients::saveToCSV(ofstream& file) {
    file << id << "," << name << "," << tel << "," << address << endl;
}

bool fileExists(const string& filename) {
    ifstream file(filename);
    return file.good();
}




int main() {

    int id;
    string name, tel, address;
    const int maxnumClient = 2;



    Clients client[maxnumClient];

    string filename = "clients.csv";

    // Open the file in append mode (ios::app)
    ofstream outFile;
    bool isNewFile = !fileExists(filename);  // Check if the file exists

    outFile.open(filename, ios::app);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // If it's a new file, add a CSV header
    if (isNewFile) {
        outFile << "ID,Name,Tel,Address\n";
    }





    // Input and append to CSV
    for (int i = 0; i < maxnumClient; i++) {
        cout << "Plz input ID: ";
        cin >> id;
        cout << "Plz input name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Plz input tel: ";
        getline(cin, tel);
        cout << "Plz input address: ";
        getline(cin, address);

        client[i].insertClient(id, name, tel, address);
        client[i].saveToCSV(outFile);  // Append new client data
    }
    outFile.close();

    cout << "\n ------ Client Data Appended to CSV ------ \n";

    return 0;
}
