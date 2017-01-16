#include "stdafx.h"
using namespace std;

Battery::Battery()
{
}

Battery::Battery(string m, float p, float wi, float h, float l, float we) 
{
	setModel(m);
	setPrice(p);
	setWidth(wi);
	setHeight(h);
	setLength(l);
	setWeight(we);
	setVolume(h*l*wi);
}

Battery::~Battery()
{
}

void Battery::setModel(string m)
{
	model = m;
}

void Battery::setPrice(float p)
{
	price = p;
}

void Battery::setWidth(float w)
{
	width = w;
}

void Battery::setHeight(float h)
{
	height = h;
}

void Battery::setLength(float l)
{
	length = l;
}

void Battery::setWeight(float w)
{
	weight = w;
}

void Battery::setVolume(float v)
{
	volume = v;
}

string Battery::getModel()
{
	return model;
}

float Battery::getPrice()
{
	return price;
}

float Battery::getWidth()
{
	return width;
}

float Battery::getHeight()
{
	return height;
}

float Battery::getLength()
{
	return length;
}

float Battery::getWeight()
{
	return weight;
}

float Battery::getVolume()
{
	return volume;
}

void Battery::printBatteries()
{
	cout << "***********\n";
	cout << "model >>> " << model << endl;
	cout << "price >>> " << price << endl;
	cout << "width >>> " << width << endl;
	cout << "height >>> " << height << endl;
	cout << "length >>> " << length << endl;
	cout << "weight >>> " << weight << endl;
	cout << "volume >>> " << volume << endl;
	cout << "***********\n";
}
