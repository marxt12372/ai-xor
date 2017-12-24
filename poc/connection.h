#pragma once
#include "neuron.h"
#include <iostream>
#include <set>

using namespace std;

class Connection
{
	private:
		float _level;
		float _weight;
		Neuron * _startPoint;
	public:
		Connection(Neuron * startPoint, float level, float weight);
		int getOutput(int input);
};
