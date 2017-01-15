// Caixas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

char * CONFIG_FILE_BT = "config_bt.cfg";
char * CONFIG_FILE_BX = "config_bx.cfg";

std::vector<string> readCFG(char * s) {
	ifstream settings;
	string line;
	std::vector<string> vec;
	settings.open(s);
	if (settings.is_open())	{
		cout << "Lendo arquivo de configuração" << s << "\n";
		while (getline(settings, line))		{
			vec.push_back(line);
		}
		settings.close();
	}
	else {
		cout << "Não foi possível ler o arquivo de configuração "<< s << "\n";
		exit(EXIT_FAILURE);
	}
	return vec;
}

int main()
{
	char holder;
	std::vector<string> battery_types;
	std::vector<string> box_types;
	//battery_types = readCFG(CONFIG_FILE_BT);
	//box_types = readCFG(CONFIG_FILE_BX);
	system("dir");
	for (string n : battery_types) {
		std::cout << n << '\n';
	}
	cout << "\n\n";
	system("echo %cd%");
	cin >> holder;
    return 0;
}

