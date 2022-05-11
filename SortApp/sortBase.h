#pragma once

#include <iostream>
#include <vector>

using namespace std;

class SortBase
{
    public:
        SortBase() {};
        virtual ~SortBase() {};

        void addItem    ( int item ) { m_mainVector.push_back( item ); }
        void dequeueItem( int item ) { m_mainVector.front    (      ); }

        virtual void sort() = 0;

        void printVector()
        {
            for ( auto& iter: m_mainVector )
            {
                cout << iter << " ";
            }
            cout << endl;
        }

        

    protected:
        vector<int> m_mainVector;
    
    private:

};