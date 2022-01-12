# Set variables
CC=g++
CXXFLAGS=-Wall -I.
ODIR=obj

# Objects
_OBJ = Name_pairs.o main.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

# Dependancies (headers)
DEPS = Name_pairs.h

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

# For the below, no libs are needed to be included 
Name_pairs.exe: $(OBJ)
	$(CC) -o $@ $^

clean: 
	rm -f $(ODIR)/*.o core Name_pairs
