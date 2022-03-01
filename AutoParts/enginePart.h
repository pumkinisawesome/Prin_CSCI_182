#pragma once

#include <iostream>
#include "autoPart.h"

class EnginePart : public AutoPart
{
	public:
		// Constructor
		EnginePart( int t_partNo, int t_partMaker, std::string t_partDescription,
			        int t_EngineSpecNo );

		// Destructor
		~EnginePart();

	private:
		int m_EngineSpecNo{};
};