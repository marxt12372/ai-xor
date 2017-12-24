#include "neuron.h"

Neuron::Neuron(int level, float weight)
{
	_level = level;
	_weight = weight;
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
	//output += _weight;
	if(output > _weight) return 1;
	else return 0;
	//return output * _weight;
}
