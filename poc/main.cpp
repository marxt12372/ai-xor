#include "main.h"

using namespace std;

Connection * inConn1;
Connection * inConn2;
Connection * inConn3;
Connection * inConn4;
Neuron * neuron1;
Neuron * neuron2;
Connection * outConn1;
Connection * outConn2;
Neuron * neuron3;

int main(void)
{
	inConn1 = new Connection(NULL, 0, 1);
	inConn2 = new Connection(NULL, 0, -1);
	inConn3 = new Connection(NULL, 0, -1);
	inConn4 = new Connection(NULL, 0, 1);
	neuron1 = new Neuron(1, 1);
	neuron2 = new Neuron(1, 1);
	outConn1 = new Connection(neuron1, 1, -0.5);
	outConn2 = new Connection(neuron2, 1, 0.5);
	neuron3 = new Neuron(2, 1);

	/*inConn1 = new Connection(NULL, 0, 1);
	inConn2 = new Connection(NULL, 0, -1);
	inConn3 = new Connection(NULL, 0, 1);
	inConn4 = new Connection(NULL, 0, -1);
	neuron1 = new Neuron(1, 0.5);
	neuron2 = new Neuron(1, -1.5);
	outConn1 = new Connection(neuron1, 1, 1);
	outConn2 = new Connection(neuron2, 1, 1);
	neuron3 = new Neuron(2, 1.5);*/

	int a;
	int b;

	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;

	neuron1->addInput(inConn1->getOutput(a));
	neuron1->addInput(inConn3->getOutput(b));
	neuron2->addInput(inConn2->getOutput(a));
	neuron2->addInput(inConn4->getOutput(b));

	neuron3->addInput(outConn1->getOutput(neuron1->getOutput()));
	neuron3->addInput(outConn2->getOutput(neuron2->getOutput()));

	cout << "Answer: " << neuron3->getOutput() << endl;

	return 0;
}
