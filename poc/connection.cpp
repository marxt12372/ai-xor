#include "connection.h"

Connection::Connection(Neuron * startPoint, float level, float weight)
{
	_startPoint = startPoint;
	_level = level;
	_weight = weight;
}

int Connection::getOutput(int input)
{
	return input * _weight;
}
