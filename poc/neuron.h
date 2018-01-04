#pragma once
#include <iostream>
#include <set>

using namespace std;

class Neuron
{
	private:
		int _level;
		float _bias;
		std::set<float> _inputs;
	public:
		Neuron(int level, float bias);
		void addInput(float input);
		int getOutput();
};
