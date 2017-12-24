#include "neuron.h"

Neuron::Neuron(int level, float weight)
{
	_level = level;
	_weight = weight;
}

void Neuron::addInput(int input)
{
	_inputs.insert(input);
}

int Neuron::getOutput()
{
	int output = 0;
	for(int input : _inputs)
	{
		output += input;
	}
	return output * _weight;
}
