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
	Box b;
	string prefix_1 = "<";
	string prefix_2 = "<\\";
	vector<string> splitted;

	for (string s : text) {
		if (s.substr(0, prefix_1.size()) != prefix_1) {
			splitted = split(s, '=');
			if (splitted[0] == S_TAM) {
				b.setSize(stoi(splitted[1]));
				continue;
			}
			if (splitted[0] == S_LAR) {
				b.setWidth(stof(splitted[1]));
				continue;
			}
			if (splitted[0] == S_ALT) {
				b.setHeight(stof(splitted[1]));
				continue;
			}
			if (splitted[0] == S_COM) {
				b.setLength(stof(splitted[1]));
				continue;
			}
		}
		else {
			if (s.substr(0, prefix_1.size()) != prefix_2) {
				boxes.push_back(b);
			}
			else {
				continue;
			}
		}
	}
	return boxes;
}

int main()
{
	Box b;
	char holder;
	vector<Box> boxes_available;
	vector<Battery> batteries_available;

	vector<string> battery_types;
	vector<string> box_types;

	battery_types = readCFG(CONFIG_FILE_BT);
	box_types = readCFG(CONFIG_FILE_BX);

	cin >> holder;

	return 0;
}

