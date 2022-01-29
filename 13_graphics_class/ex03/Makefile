# Set variables
CC=g++
GUIDIR=../../GUI/
CXXFLAGS=-Wall -I. -I$(GUIDIR) -std=c++14
ODIR=obj

# Objects
_OBJ = Arrow.o main.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

# Dependancies (headers)
DEPS = Arrow.h

# Libraries
LIBS=-lm -lfltk -lfltk_images

# Compile stage
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -g -o $@ $(CXXFLAGS) $< 

# Link stage
Arrow.exe: $(OBJ) $(GUIDIR)*.o
	$(CC) -o $@ $^ $(LIBS)

clean: 
	rm -f $(ODIR)/*.o core Arrow.exe
