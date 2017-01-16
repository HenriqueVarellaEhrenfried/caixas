#pragma once
using namespace std;
class Battery
{
private:
	string model; //Modelo
	float price;  //Preço
	float width;  //Espessura
	float height; //Altura
	float length; //Comprimento
	float weight; //Peso
	float volume; //Volume

public:
	Battery();
	Battery(string m, float p, float wi, float h, float l, float we);//Model, Price, Width, Height, Length, Weigth
	~Battery();

	void setModel(string m);
	void setPrice(float p);
	void setWidth(float w);
	void setHeight(float h);
	void setLength(float l);
	void setWeight(float w);
	void setVolume(float v);

	string getModel();
	float getPrice();
	float getWidth();
	float getHeight();
	float getLength();
	float getWeight();
	float getVolume();

	void printBatteries();

};

