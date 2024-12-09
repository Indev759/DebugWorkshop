#include "Point.h"
#include <iostream>

Point::Point()
{
	_coord = new int[2];
	_coord[0] = _coord[1] = 0;
}

Point::Point(int x, int y)
{
	_coord = new int[2];
	_coord[0] = x;
	_coord[1] = y;
}

Point::Point(const Point& other)
{
	delete _coord;
	*this = other;
}

Point::~Point()
{
	delete this->_coord;
}

Point& Point::operator=(const Point& other)
{
	if (this->_coord != nullptr)
	{
		if (other.getX() == this->getX(), other.getY() == this->getY())
		{
			return *this;
		}
	}
	delete this->_coord;
	this->_coord = new int[2];
	this->_coord[0] = other.getX();
	this->_coord[1] = other.getY();

	return *this;
}

int Point::getX() const 
{ 
	return _coord[0]; 
}

int Point::getY() const
{ 
	return _coord[1]; 
}


std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p._coord[0] << "," << p._coord[1] << ")";
	return os;
}
