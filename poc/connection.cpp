#include "connection.h"

Connection::Connection(Neuron * startPoint, int level, float weight)
{
	_startPoint = startPoint;
	_level = level;
	_weight = weight;
}

float Connection::getOutput(float input)
{
	return input * _weight;
}
