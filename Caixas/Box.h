#pragma once
using namespace std;
class Box{
private:
	int n_battery; //Número de baterias na caixa
	int size; //Referencia do tamanho da caixa
	float t_weight; //Peso total da caixa
	float t_volume; //Volume total;
	float t_price; //Preço total;
	float width;  //Espessura
	float height; //Altura
	float length; //Comprimento
	float volume; //Volume
	float surface; //Área
	
public:
	Box();
	Box(float w, float l, float h, int s);
	~Box();

	void setNBattery(int n);
	void setSize(int s);
	void setTWeight(float w);
	void setTvolume(float v);
	void setTPrice(float p);
	void setWidth(float w);
	void setHeight(float h);
	void setLength(float l);
	void setVolume(float v);
	void setSurface(float s);

	int getNBattery();
	int getSize();
	float getTWeight();
	float getTVolume();
	float getTPrice();
	float getWidth();
	float getHeight();
	float getLength();
	float getVolume();
	float getSurface();

	void printBox();
};

