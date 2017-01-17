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
	float surface; //Área

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
	void setSurface(float s);

	string getModel();
	float getPrice();
	float getWidth();
	float getHeight();
	float getLength();
	float getWeight();
	float getVolume();
	float getSurface();

	void printBatteries();
	
};

