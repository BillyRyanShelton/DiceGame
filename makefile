Lab2: DiceGameClientCode.o DiceGame.o Player.o LoadedDie.o Die.o
	g++ DiceGameClientCode.o DiceGame.o Player.o LoadedDie.o Die.o -o Lab2

DiceGameClientCode.o: DiceGameClientCode.cpp
	g++ -c DiceGameClientCode.cpp

DiceGame.o: DiceGame.cpp DiceGame.hpp
	g++ -c DiceGame.cpp

Player.o: Player.cpp Player.hpp
	g++ -c Player.cpp

LoadedDie.o: LoadedDie.cpp LoadedDie.hpp
	g++ -c LoadedDie.cpp
Die.o: Die.cpp Die.hpp
	g++ -c Die.cpp

clean:
	rm *.o Lab2
