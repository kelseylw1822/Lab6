
COMPILER = g++
OPTIONS = -Wall
PROGRAM = main.out

all : $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Date.h Date.cpp
	$(COMPILER) $(OPTIONS) main.cpp Date.h Date.cpp -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)
