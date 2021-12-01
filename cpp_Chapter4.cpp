#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

void example3() { //문자열에서 a가 몇개인지 찾아내기 
	string str;

	cout << "문자열 입력 >>";
	getline(cin, str, '\n');
	
	int StartIndex = -1, breakcount = -1, count = 0;

	while (1) {
		int strIndex = str.find('a', StartIndex +1);

		if (strIndex == breakcount)
			break;
		else
			count++; StartIndex = strIndex;

	}

	cout << "문자 'a'는 " << count << "개 있습니다." << endl;

}

void example5() { // 문자열에서 문자 하나 바꾸기
	string str;

	int StartIndex = 0;

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료됩니다.)" << endl;
	
	while (1) {
		cout << ">>";
		getline(cin, str, '\n');

		if (str == "exit")
			break;

		if (str == "") continue;

		int index;

		do {
			index = rand() % str.length();
		} while (str[index] == ' ');

		int c = rand() % 26;
		char changeChar = 'a' + c;
		
		if (str[index] == changeChar) changeChar = 'A' + c;
		str[index] = changeChar;

		cout << str << endl;

	}

}

class Person { //Simpson가 이름 바꿔주기 
	string name;

public:
	Person() { this->name = "null"; }
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }

};

class Family {
	Person* p;
	string Fname;
	int size;

public:
 	Family(string name, int size);
	void show();
	~Family();
	void setName(int index, string name) { p[index].setName(name); };
};

Family::Family(string name, int size) {
	this->Fname = name;
	this->size = size;

	p = new Person[size];
}

void Family::show() {
	//p = start;

	for (int i = 0; i < size; i++) {
		cout << (p+i)->getName() << ' ';	
	}

	cout << '\n';
}

Family::~Family() {
	delete[]p;
	
}

class FamilyManger {
	Family* simpson;

public:
	FamilyManger();
};

FamilyManger::FamilyManger() {
	simpson = new Family("simpson", 3);
	simpson->setName(0, "Mr. simpson");
	simpson->setName(1, "Mrs. simpson");
	simpson->setName(2, "Bart simpson");
	simpson->show();

	delete simpson;
}

class Histogram { // 문자열 이어붙이기 
	string strText;
public:
	Histogram(string text);
	void put(string text);
	void putc(char ch);
	void print();
	int strFind(char ch);
	string star(int x);
};

Histogram::Histogram(string text) {
	strText += text;
	cout << text << endl;
}

void Histogram::put(string text) {
	strText += text;

	cout << text;
}

void Histogram::putc(char ch) {
	strText += ch;

	cout << ch;
	
}

int Histogram::strFind(char c) {
	int i = 0, breakcount = -1, count = 0;

	while (i<strText.length()) {
		if (strText[i] == c)
			count++;
		i++;
	}

	return count;

}

string Histogram::star(int x) {
	string star;
	for (int i= 0; i < x; i++) {
		star = star + "*";
	};

	return star;

}

void Histogram::print() {
	int count = 0;
	int size = strText.length();


	for (int i = 0; i < size; i++) {

		strText[i] = tolower(strText[i]);
		
		if (strText[i] >= 'a' && strText[i] <= 'z')
			count++;
	}

	cout << endl << endl << "총 문자의 갯수는 " << count << endl << endl;

	for (char c = 'a'; c != 'z'+1; c++) {
		cout << c << " ( " << strFind(c) << " )	: " << star(strFind(c)) << endl;
	}

}

class HistogramManger {
	
public:
	HistogramManger();

};

HistogramManger::HistogramManger() {

	Histogram elvisHisto("Wise men say, only fools rush in But I can't help,");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

}

class Player { // 두명이서 이름 입력하고 
	string name[2];
public:
	Player() { this->name[0] = "null"; this->name[1] = "null"; }
	void setName(int i, string sName) { this->name[i] = sName; }
	string getName(int i) { return name[i]; }
};

class GamblingGame {
	Player* p;
	string Gname;
public:
	GamblingGame();
	void start();
	bool isTrip(int a, int b, int c);
};

GamblingGame::GamblingGame() {
	p = new Player();

	for (int i = 0; i < 2; i++) {
		cout << i + 1 << "번째 이름 >>"; cin >> Gname;
		p->setName(i, Gname);
		
	}
}


bool GamblingGame::isTrip(int a, int b, int c) {
	if ((a == b) && (b == c)) return true; else return false;
}

void GamblingGame::start() {
	string enter;
	int i = 0;
	int a, b, c;
	bool ToF;

	while (1)
	{
		cout << p->getName(i) << "<Enter를 누르세요>" << endl; getchar(); getline(cin, enter, '\n');
		a = rand() % 3; b = rand() % 3; c = rand() % 3;

		ToF = isTrip(a, b, c);

		if (ToF) {
			cout << "		" << a << "		" << b << "		" << c << "		" <<
				p->getName(i) << "님 승리!!"; break;
		}
		else
			cout << "		" << a << "		" << b << "		" << c << "			아쉽군요!" << endl;

		i = (i + 1) % 2;
	}
}

class GamblingGameManger {
public:
	GamblingGameManger() {GamblingGame* game = new GamblingGame(); game->start(); }
};


int main() {
	srand((unsigned)time(0));
	
	cout << " example3 문자열에서 a의 개수를 구합니다." << endl; example3(); getchar();
	cout << " example5 문자열에서 알파벳 하나를 바꿉니다. " << endl; example5(); getchar();

	cout << " Family클래스에서 Simpson가족의 이름을 변경합니다. " << endl; 
	FamilyManger* fm = new FamilyManger();
	delete fm; getchar();

	cout << " Histogram클래스에서 문자열을 이어붙이고 각 알파벳의 개수를 구합니다. " << endl;
	HistogramManger *hm = new HistogramManger();
	delete hm;  getchar();

	cout << " GamblingGame클래스에서 이름을 입력하고 같은 숫자 세개가 먼저 나오면 이깁니다. " << endl;
	GamblingGameManger* gm = new GamblingGameManger(); 
	delete gm; getchar();
	
}
