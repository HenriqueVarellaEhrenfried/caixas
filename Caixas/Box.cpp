#include "stdafx.h"
using namespace std;

Box::Box()
{
}

Box::Box(float w, float l, float h, int s)
{
	setHeight(h);
	setLength(l);
	setWidth(w);
	setSize(s);
	setTPrice(0.0);
	setTvolume(0.0);
	setTWeight(0.0);
	setNBattery(0);
	setVolume(h*l*w);
	setSurface(l*w);
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

void Box::setSurface(float s)
{
	surface = s;
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

float Box::getSurface()
{
	return surface;
}

void Box::printBox()
{
	cout << "***********\n";
	cout << "n_battery >> " << n_battery << endl;
	cout << "size >> " << size << endl;
	cout << "t_weight >> " << t_weight << endl;
	cout << "t_volume >> " << t_volume << endl;
	cout << "t_price >> " << t_price << endl;
	cout << "width >> " << width << endl;
	cout << "height >> " << height << endl;
	cout << "length >> " << length << endl;
	cout << "volume >> " << volume << endl;
	cout << "surface >> " << surface << endl;
	cout << "***********\n";
}