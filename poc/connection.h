#pragma once
#include "neuron.h"
#include <iostream>
#include <set>

using namespace std;

class Connection
{
	private:
		int _level;
		float _weight;
		Neuron * _startPoint;
	public:
		Connection(Neuron * startPoint, int level, float weight);
		float getOutput(float input);
};
