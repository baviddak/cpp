# Set variables
CC=g++
GUIDIR=../../GUI/
CXXFLAGS=-Wall -I. -I$(GUIDIR) -std=c++17
ODIR=obj

# Objects
_OBJ = My_window.o main.o
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

# Dependancies (headers)
DEPS = My_window.h

# Libraries
LIBS=-lm -lfltk -lfltk_images

# Compile stage
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $(CXXFLAGS) $< 

# Link stage
My_window.exe: $(OBJ) $(GUIDIR)*.o
	$(CC) -o $@ $^ $(LIBS)

clean: 
	rm -f $(ODIR)/*.o core My_window.exe
