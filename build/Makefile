IDIR = ../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++11 -g

ODIR=../src

.PHONY: all

_OBJ = Alg_Mat.o Chronometer.o BasicMatrix.o Alg_row.o Alg_col.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


all: P1

$(ODIR)/Alg_Mat.o: $(ODIR)/Alg_Mat.cpp $(IDIR)/Alg_Mat.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/Chronometer.o: $(ODIR)/Chronometer.cpp $(IDIR)/Chronometer.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/BasicMatrix.o: $(ODIR)/BasicMatrix.cpp $(IDIR)/BasicMatrix.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/Alg_row.o: $(ODIR)/Alg_row.cpp $(IDIR)/BasicMatrix.hpp $(IDIR)/Algorithms.hpp 
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/Alg_col.o: $(ODIR)/Alg_col.cpp $(IDIR)/BasicMatrix.hpp $(IDIR)/Algorithms.hpp 
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/main.o: $(ODIR)/main.cpp $(IDIR)/BasicMatrix.hpp $(IDIR)/Algorithms.hpp $(IDIR)/Alg_row.hpp $(IDIR)/Alg_col.hpp $(IDIR)/Chronometer.hpp
	$(CC) -c -o $@ $< $(CFLAGS)


P1: $(OBJ)
	$(CC)  -o $@ $^ $(CFLAGS)




.PHONY: clean

clean:
	rm -f $(ODIR)/*.o ./P1
