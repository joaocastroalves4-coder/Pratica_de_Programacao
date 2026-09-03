CXX = g++
CXXFLAGS = -Wall -Iinclude

TARGET = vpl_execution
OBJECTS = build/Ponto.o build/Circulo.o build/main.o

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

build/Ponto.o: src/entidades/Ponto.cpp include/Ponto.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/Circulo.o: src/entidades/Circulo.cpp include/Circulo.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/main.o: src/main.cpp include/Ponto.hpp include/Circulo.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)