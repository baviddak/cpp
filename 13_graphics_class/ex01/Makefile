# Set variables
CC=g++
GUIDIR=../../GUI/
CXXFLAGS=-Wall -I. -I$(GUIDIR) -std=c++14
ODIR=obj

# Objects
_OBJ = Arc.o main.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

# Dependancies (headers)
DEPS = Arc.h

# Libraries
LIBS=-lm -lfltk -lfltk_images
# ../../GUI/*.o -I../../GUI/ -lfltk -lfltk_images

# Compile stage
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -g -o $@ $(CXXFLAGS) $< 

# Link stage
Arc.exe: $(OBJ) $(GUIDIR)*.o
	$(CC) -o $@ $^ $(LIBS)

clean: 
	rm -f $(ODIR)/*.o core Arc.exe
