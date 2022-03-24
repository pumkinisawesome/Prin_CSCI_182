#pragma once

class Circuit
{
public:
    // Constructor
	Circuit( float resistance );

    // Destructor
	~Circuit();

    // Abstract base class function
    virtual float getResistance() = 0;

    void addNewResistance( float resistance );

protected:
    float* m_pResistance        {   };
    int    m_lenResistanceArray { 0 };
};