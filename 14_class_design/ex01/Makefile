# Set variables
CC=g++
GUIDIR=../../GUI/
CXXFLAGS=-Wall -I. -I$(GUIDIR) -std=c++14
ODIR=obj

# Objects
_OBJ = Faces.o main.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

# Dependancies (headers)
DEPS = Faces.h

# Libraries
LIBS=-lm -lfltk -lfltk_images

# Compile stage
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CXXFLAGS) $< 

# Link stage
Faces.exe: $(OBJ) $(GUIDIR)*.o
	$(CC) -o $@ $^ $(LIBS)

clean: 
	rm -f $(ODIR)/*.o core Faces.exe
