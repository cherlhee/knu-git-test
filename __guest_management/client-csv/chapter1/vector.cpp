#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<vector<string>> data;
    ifstream infile("client.csv");
    string line;

    // 1. 기존 파일 데이터를 읽어 벡터로 저장
    while (getline(infile, line)) {
        stringstream ss(line);
        string cell;
        vector<string> row;

        while (getline(ss, cell, ',')) {
            row.push_back(cell);
        }

        data.push_back(row);
    }
    infile.close();

    // 2. 사용자로부터 입력받아 새 데이터 추가
    string name, age, email;
    cout << "이름 입력: ";
    getline(cin, name);
    cout << "나이 입력: ";
    getline(cin, age);
    cout << "이메일 입력: ";
    getline(cin, email);

    vector<string> new_row = { name, age, email };
    data.push_back(new_row);

    // 3. 전체 데이터를 파일에 다시 저장
    ofstream outfile("client.csv");
    for (const auto& row : data) {
        for (size_t i = 0; i < row.size(); ++i) {
            outfile << row[i];
            if (i != row.size() - 1) outfile << ",";
        }
        outfile << endl;
    }
    outfile.close();

    cout << "새로운 사용자가 추가되었습니다." << endl;

    return 0;
}
