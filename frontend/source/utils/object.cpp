#include"object.hpp"
#include<string>

Object::Object(std::string value) // Object Constractor
{
	this->value = value;

}

int Object::toInt() const {
	return std::stoi(value);
}

long Object::toLong() const {
	return std::stol(value);
}

float Object::toFloat() const {
	return std::stof(value);
}

double Object::toDouble() const {
	return std::stod(value);
}

std::string Object::toString() const {
	return value;
}
