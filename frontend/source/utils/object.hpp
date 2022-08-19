#include<iostream>

#ifndef OBJECT_HPP
#define OBJECT_HPP
class Object
{

	std::string value;

public:
	Object(std::string value);
	/*Later Please use 'Destructor' */
	int toInt() const;
	long toLong() const;
	std::string toString() const;
	float toFloat() const;
	double toDouble() const;


};

#endif 
