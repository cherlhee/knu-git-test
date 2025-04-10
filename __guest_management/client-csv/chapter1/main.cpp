#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generateKoreanName() {
    vector<string> lastNames = { "김", "이", "박", "최", "정", "조", "강", "윤", "장", "임", "한", "오", "서", "신" };
    vector<string> firstNames = { "민수", "서연", "지후", "지민", "하은", "도윤", "예은", "수빈", "현우", "지원",
                                 "시우", "유진", "하윤", "건우", "예린", "소율", "지안", "태윤", "은우", "서준" };

    return lastNames[rand() % lastNames.size()] + firstNames[rand() % firstNames.size()];
}

string generateAddress() {
    vector<string> cities = {
        "서울", "부산", "대구", "인천", "광주", "대전", "울산", "세종",
        "수원", "고양", "성남", "용인", "청주", "천안", "전주", "포항",
        "창원", "김해", "평택", "안산", "안양", "남양주", "화성", "제주"
    };

    vector<string> districts = {
        "중구", "서구", "남구", "북구", "동구", "강남구", "강서구", "송파구", "성동구", "성북구",
        "해운대구", "수성구", "달서구", "유성구", "팔달구", "덕양구", "일산동구", "분당구", "기흥구",
        "흥덕구", "서북구", "덕진구", "진해구", "장유동", "신제주"
    };

    return cities[rand() % cities.size()] + " " + districts[rand() % districts.size()] + " 123-45";
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    ofstream file("client.csv");
    if (!file.is_open()) {
        cerr << "파일 열기 실패!" << endl;
        return 1;
    }

    file << "이름,나이,주소\n";

    for (int i = 0; i < 100; ++i) {
        string name = generateKoreanName();
        int age = rand() % 60 + 20;
        string address = generateAddress();

        file << name << "," << age << "," << address << "\n";
    }

    file.close();
    cout << "client.csv 파일이 생성되었습니다." << endl;

    return 0;
}
