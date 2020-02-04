#pragma once
class Ant
{
private:
	double distance;
	double fitness;
	int position;

public:
	Ant();
	~Ant();

	double get_distance();
	double get_fitness();
	int get_position();
};

