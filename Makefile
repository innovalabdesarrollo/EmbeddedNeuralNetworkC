CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude
SRC = src/neurona.cpp src/capa.cpp src/red_neuronal.cpp src/main.cpp
OUT = bin/hola_mundo

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p bin
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -rf bin
