#include "stdafx.h"
#include "Battery.h"


Battery::Battery()
{
}

Battery::Battery(char * m, float p, float wi, float h, float l, float we, float v)
{
	setModel(m);
	setPrice(p);
	setWidth(wi);
	setHeight(h);
	setLength(l);
	setWeight(we);
	setVolume(v);
}

Battery::~Battery()
{
}

void Battery::setModel(char * m)
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

char * Battery::getModel()
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
