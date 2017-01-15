#pragma once
class Battery
{
private:
	char * model; //Modelo
	float price;  //Preço
	float width;  //Espessura
	float height; //Altura
	float length; //Comprimento
	float weight; //Peso
	float volume; //Volume

public:
	Battery();
	Battery(char * m, float p, float wi, float h, float l, float we);
	~Battery();

	void setModel(char * m);
	void setPrice(float p);
	void setWidth(float w);
	void setHeight(float h);
	void setLength(float l);
	void setWeight(float w);
	void setVolume(float v);

	char * getModel();
	float getPrice();
	float getWidth();
	float getHeight();
	float getLength();
	float getWeight();
	float getVolume();

};

