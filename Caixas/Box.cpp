#include "stdafx.h"
#include "Box.h"


Box::Box()
{
}

Box::Box(float w, float l, float h, int s)
{
	setHeight(h);
	setLength(l);
	setWidth(w);
	setVolume(h*l*w);
}

Box::~Box()
{
}

void Box::setNBattery(int n)
{
	n_battery = n;
}

void Box::setSize(int s)
{
	size = s;
}

void Box::setTWeight(float w)
{
	t_weight = w;
}

void Box::setTvolume(float v)
{
	t_volume = v;
}

void Box::setTPrice(float p)
{
	t_price = p;
}

void Box::setWidth(float w)
{
	width = w;
}

void Box::setHeight(float h)
{
	height = h;
}

void Box::setLength(float l)
{
	length = l;
}

void Box::setVolume(float v)
{
	volume = v;
}

int Box::getNBattery()
{
	return n_battery;
}

int Box::getSize()
{
	return size;
}

float Box::getTWeight()
{
	return t_weight;
}

float Box::getTVolume()
{
	return t_volume;
}

float Box::getTPrice()
{
	return t_price;
}

float Box::getWidth()
{
	return width;
}

float Box::getHeight()
{
	return height;
}

float Box::getLength()
{
	return length;
}

float Box::getVolume()
{
	return volume;
}
