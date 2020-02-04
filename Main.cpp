#include <iostream>
#include "ACO.h"
#include "Ant.h"

int main() {
	ACO *aco = new ACO();
	aco->initialize();
	aco->print_ants();
	
}