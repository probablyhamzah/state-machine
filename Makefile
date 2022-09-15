CPP := g++
CPP_FLAGS := -Wall

EXEC := main
LIB := -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
INCLUDE := include
STATES := states

all: $(EXEC)

clean:
	-rm $(EXEC)

$(EXEC): main.cpp $(STATES)/*.cpp
	$(CPP) $(CPP_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIB)
