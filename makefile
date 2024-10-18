all: PacmanGame

PacmanGame: dot.o board.o direction.o game_engine.o painter.o point.o pacman.o main.o
   g++ -o Pacman.exe dot.o board.o direction.o game_engine.o painter.o point.o pacman.o main.o

dot.o:
   g++ dot.cpp -o dot.o -c

board.o:
   g++ board.cpp -o board.o -c

direction.o:
   g++ direction.cpp -o direction.o -c

game_engine.o:
   g++ game_engine.cpp -o game_engine.o -c

painter.o:
   g++ painter.cpp -o painter.o -c

point.o:
   g++ point.cpp -o point.o -c

pacman.o:
   g++ pacman.cpp -o pacman.o -c

main.o:
   g++ main.cpp -o main.o -c

clean:
   rm -f *.o *.exe
