// Caixas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

char * CONFIG_FILE_BT = "config_bt.cfg";
char * CONFIG_FILE_BX = "config_bx.cfg";
const string S_TAM = "tamanho";
const string S_LAR = "largura";
const string S_ALT = "altura";
const string S_COM = "comprimento";
const string S_PES = "peso";
const string S_MOD = "modelo";
const string S_PRE = "preco";

vector<string> split(string s, char c) {
	vector<string> splitted;
	string str = "";
	int size = s.length();
	for (int i = 0; i < size; i++) {
		if (s[i] != c) {
			str = str + s[i];
		}
		else {
			splitted.push_back(str);
			str = "";
		}
	}
	if (str != "") {
		splitted.push_back(str);
	}
	return splitted;
}

vector<string> readCFG(char * s) {
	ifstream settings;
	string line;
	std::vector<string> vec;
	settings.open(s);
	if (settings.is_open())	{
		while (getline(settings, line))		{
			vec.push_back(line);
		}
		settings.close();
	}
	else {
		exit(EXIT_FAILURE);
	}
	return vec;
}

vector<Box> createAvailableBoxes(vector<string> text) {
	vector<Box> boxes;
	box b;
	string prefix_1 = "<";
	string prefix_2 = "</";
	vector<string> splitted;
	std::string::size_type sz;
	b.height = 0;
	b.length = 0;
	b.size = 0;
	b.width = 0;

	for (string s : text) {
		splitted = split(s, '=');
		if (s.substr(0, prefix_1.size()) != prefix_1) {			
			if (splitted[0] == S_TAM) {
				b.size = (stoi(splitted[1], &sz, 0));
				continue;
			}
			if (splitted[0] == S_LAR) {
				b.width = (stof(splitted[1], &sz));
				continue;
			}
			if (splitted[0] == S_ALT) {
				b.height = (stof(splitted[1], &sz));
				continue;
			}
			if (splitted[0] == S_COM) {
				b.length = (stof(splitted[1], &sz));
				continue;
			}
		}
		else {
			if (s.substr(0, prefix_2.size()) == prefix_2) {
				Box  bx = Box(b.width, b.length, b.height, b.size);
				boxes.push_back(bx);
			}
			else {
				continue;
			}
		}
	}
	return boxes;
}

vector<Battery> createAvailableBatteries(vector<string> text) {
	vector<Battery> batteries;
	battery b;
	string prefix_1 = "<";
	string prefix_2 = "</";
	vector<string> splitted;
	std::string::size_type sz;
	b.height = 0;
	b.length = 0;
	b.weight = 0.0;
	b.width = 0;
	b.price = 0.0;
	b.model = "MODELO";

	for (string s : text) {
		splitted = split(s, '=');
		if (s.substr(0, prefix_1.size()) != prefix_1) {
			if (splitted[0] == S_MOD) {
				b.model = splitted[1];
				continue;
			}
			if (splitted[0] == S_PRE) {
				b.price = (stof(splitted[1], &sz));
				continue;
			}
			if (splitted[0] == S_LAR) {
				b.width = (stof(splitted[1], &sz));
				continue;
			}					
			if (splitted[0] == S_ALT) {
				b.height = (stof(splitted[1], &sz));
				continue;
			}
			if (splitted[0] == S_COM) {
				b.length = (stof(splitted[1], &sz));
				continue;
			}
			if (splitted[0] == S_PES) {
				b.weight = (stof(splitted[1], &sz));
				continue;
			}
		}
		else {
			if (s.substr(0, prefix_2.size()) == prefix_2) {
				Battery bt = Battery(b.model, b.price, b.width, b.height, b.length, b.weight);
				batteries.push_back(bt);
			}
			else {
				continue;
			}
		}
	}
	return batteries;
}

int main()
{
	Box b;
	char holder;
	vector<Box> boxes_available;
	vector<Battery> batteries_available;

	vector<string> battery_types;
	vector<string> box_types;

	cout << "Lendo arquivos de configuração" << endl;
	battery_types = readCFG(CONFIG_FILE_BT);
	box_types = readCFG(CONFIG_FILE_BX);
	cout << "Arquivos de configuração lidos com sucesso" << endl;

	boxes_available = createAvailableBoxes(box_types);
	batteries_available = createAvailableBatteries(battery_types);



	cout << "Fim do programa!\n";
	cin >> holder;

	return 0;
}

