#include "neuron.h"

Neuron::Neuron(int level, float bias)
{
	_level = level;
	_bias = bias;
}

void Neuron::addInput(float input)
{
	_inputs.insert(input);
}

int Neuron::getOutput()
{
	float output = 0;
	for(float input : _inputs)
	{
		output += input;
	}
	//output += _bias;
	if(output > 0) return 1;
	else return -1;
}
