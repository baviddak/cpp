# Set variables
CC=g++
GUIDIR=../../GUI/
CXXFLAGS=-Wall -I. -I$(GUIDIR) -std=c++14
ODIR=obj

# Objects
_OBJ = Striped_rectangle.o main.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

# Dependancies (headers)
DEPS = Striped_rectangle.h

# Libraries
LIBS=-lm -lfltk -lfltk_images

# Compile stage
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CXXFLAGS) $< 

# Link stage
Striped_rectangle.exe: $(OBJ) $(GUIDIR)*.o
	$(CC) -o $@ $^ $(LIBS)

clean: 
	rm -f $(ODIR)/*.o core Striped_rectangle.exe
