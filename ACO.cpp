#include "ACO.h"
#include "Ant.h"
#include <iostream>

ACO::ACO(int param_pop, double param_evaporate, double param_pheromone, double param_visibility)
{
	this->population_size = 100;
	this->evaporate_rate = param_evaporate;
	this->pheromone_factor = param_pheromone;
	this->visibility_factor = param_visibility;

	this->vect_ants.reserve(this->population_size);
}


ACO::~ACO()
{
}

void ACO::initialize()
{
	for (int i = 0; i < this->population_size; i++) {
		Ant *ant = new Ant();
		this->vect_ants.push_back(ant);
	}	

}

void ACO::solve()
{
	for (int i = 0; i < this->population_size; i++) {
		
	}
}

void ACO::print_ants()
{	
	//std::cout << std::right << std::setfill(' ');
	std::cout << "DISTANCE" << std::setw(15) << "FITNESS" << std::setw(15) << "POSITION\n";
	for (int i = 0; i < this->vect_ants.size(); i++) {	
		std::cout << std::setw(5) << this->vect_ants.at(i)->get_distance();
		std::cout << std::setw(15) << this->vect_ants.at(i)->get_fitness();
		std::cout << std::setw(10) << this->vect_ants.at(i)->get_position();
		std::cout << std::endl;
	}
}

