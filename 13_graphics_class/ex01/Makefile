# Set variables
CC=g++
CXXFLAGS=-Wall -I. -std=c++14
ODIR=obj
GUIDIR=../../GUI/

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
