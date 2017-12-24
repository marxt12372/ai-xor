



COMPILER=c++
OUTPUT=output
REMOVE=rm
ARGS=-std=c++11




compile: main.cpp neuron.cpp connection.cpp
	$(COMPILER) $(ARGS) -c $?



link:
	$(COMPILER) -o $(OUTPUT) *.o

clean:
	$(REMOVE) *.o $(OUTPUT)
