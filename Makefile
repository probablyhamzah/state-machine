CPP := g++
CPP_FLAGS := -Wall

EXEC := main
LIB := -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
INCLUDE := include
SRC := src

all: $(EXEC)

clean:
	-rm $(EXEC)

$(EXEC): main.cpp $(SRC)/*.cpp
	$(CPP) $(CPP_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIB)
