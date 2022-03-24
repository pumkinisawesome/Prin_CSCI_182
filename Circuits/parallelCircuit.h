#pragma once

#include "circuit.h"

class ParallelCircuit : public Circuit
{
public:
    // Constructor
	ParallelCircuit( float resistance ) : Circuit( resistance ) {};

    // Destructor
	~ParallelCircuit() {};

    float getResistance();
    void  addResistance( float resistance );
};
