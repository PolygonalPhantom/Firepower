GPP = g++
SRC = $(wildcard src/*.cpp)

build:
	$(GPP) $(SRC) -o bin/game
	echo "\n\n<make run> to run the game"
	
run:
	./bin/game
