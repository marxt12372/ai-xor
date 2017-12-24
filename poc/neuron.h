#pragma once
#include <iostream>
#include <set>

using namespace std;

class Neuron
{
	private:
		int _level;
		float _weight;
		std::set<int> _inputs;
	public:
		Neuron(int level, float weight);
		void addInput(int input);
		int getOutput();
};
