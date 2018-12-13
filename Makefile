CC = g++
exe_file = ants_vs_bees
$(exe_file): insect.o bee.o ant.o harvester.o thrower.o fire.o longthrower.o shortthrower.o wall.o ninja.o bodyguard.o game.o driver.o
	$(CC) insect.o bee.o ant.o harvester.o thrower.o fire.o longthrower.o shortthrower.o wall.o ninja.o bodyguard.o game.o driver.o -o $(exe_file)
insect.o: insect.cpp
	$(CC) -c insect.cpp
bee.o: bee.cpp
	$(CC) -c bee.cpp
ant.o: ant.cpp
	$(CC) -c ant.cpp
harvester.o: harvester.cpp
	$(CC) -c harvester.cpp
thrower.o: thrower.cpp
	$(CC) -c thrower.cpp
fire.o: fire.cpp
	$(CC) -c fire.cpp
longthrower.o: longthrower.cpp
	$(CC) -c longthrower.cpp
shortthrower.o: shortthrower.cpp
	$(CC) -c shortthrower.cpp
wall.o: wall.cpp
	$(CC) -c wall.cpp
ninja.o: ninja.cpp
	$(CC) -c ninja.cpp
bodyguard.o: bodyguard.cpp
	$(CC) -c bodyguard.cpp
game.o: game.cpp
	$(CC) -c game.cpp
driver.o: driver.cpp
	$(CC) -c driver.cpp
clean:
	rm -f *.out *.o $(exe_file)
