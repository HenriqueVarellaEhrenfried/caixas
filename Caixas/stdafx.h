// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <stdlib.h> 
#include <tchar.h>
#include <iostream>
#include <new>
#include <fstream>
#include <string>
#include <vector>
#include "Box.h"
#include "Battery.h"

typedef struct box {
	int size; //Referencia do tamanho da caixa
	float width;  //Espessura
	float height; //Altura
	float length; //Comprimento
};
typedef struct battery {
	string model; //Modelo
	float price;  //Preço
	float width;  //Espessura
	float height; //Altura
	float length; //Comprimento
	float weight; //Peso
};
// TODO: reference additional headers your program requires here
