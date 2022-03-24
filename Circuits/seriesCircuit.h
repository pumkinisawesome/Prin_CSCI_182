#pragma once

#include "circuit.h"

class SeriesCircuit : public Circuit
{
public:
	// Constructor
	SeriesCircuit( float resistance ) : Circuit( resistance ) {};

	// Destructor
	~SeriesCircuit() {};

	float getResistance();
	void  addResistance( float resistance );
};