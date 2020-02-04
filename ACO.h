#pragma once
#include "Ant.h"
#include <vector>
#include <iomanip>

class ACO
{
private:
	int population_size;
	std::vector<Ant*> vect_ants;
	double evaporate_rate;		//e
	double pheromone_factor;	//alpha
	double visibility_factor;	//beta

	double fitness;
public:	
	ACO(int param_pop = 100, double param_evaporate = 0.5, double param_pheromone = 2.0, double param_visibility = 1.0);
	~ACO();

	void initialize();
	void solve();

	void print_ants();
	
};

