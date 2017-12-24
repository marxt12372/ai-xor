#pragma once
#include <iostream>
#include <set>

using namespace std;

class Neuron
{
	private:
		int _level;
		float _weight;
		std::set<float> _inputs;
	public:
		Neuron(int level, float weight);
		void addInput(float input);
		int getOutput();
};
