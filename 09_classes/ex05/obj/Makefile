# Set variables
CC=g++
CXXFLAGS=-Wall -I. -std=c++14
ODIR=obj

# Objects
_OBJ = Book.o main.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

# Dependancies (headers)
DEPS = Book.h

# Libraries
LIBS=-lm 

# Compile stage
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -g -o $@ $(CXXFLAGS) $< 

# Link stage
Books: $(OBJ)
	$(CC) -o $@ $^ $(LIBS)

clean: 
	rm -f $(ODIR)/*.o core Books
