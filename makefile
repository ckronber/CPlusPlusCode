all: numRom

%: %.cpp
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

