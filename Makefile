events.o: events.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<

main.o: main.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<
options.o: options.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<

rungame.o: rungame.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<

startgame.o: startgame.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<

tool.o: tool.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<

gameend.o: gameend.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<

options.o: options.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<
	
questions.o: questions.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<
	
events2.o: events2.cpp game.h
	g++ -pedantic-errors -std=c++11 -c $<

game: events.o main.o options.o rungame.o startgame.o tool.o gameend.o options.o questions.o events2.o
	g++ -pedantic-errors -std=c++11 $^ -o $@

clean:
	rm -f events.o main.o options.o rungame.o startgame.o tool.o gameend.o options.o questions.o events2.o
	
.PHONY: clean
