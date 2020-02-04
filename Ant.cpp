#include "Ant.h"
#include <limits>

Ant::Ant()
{
	//this->position = std::numeric_limits<int>::max();
	this->distance = 0.2; //std::numeric_limits<double>::infinity();
	this->fitness = 139.551;// std::numeric_limits<double>::infinity();
	this->position = 1; // std::numeric_limits<int>::infinity();
}


Ant::~Ant()
{
}

double Ant::get_distance()
{
	return this->distance;
}

double Ant::get_fitness()
{
	return this->fitness;
}

int Ant::get_position()
{
	return this->position;
}
