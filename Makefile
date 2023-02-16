all : sortsLearn

sortsLearn : main.o sorts.o testsorts.o arraywork.o statarray.o
	g++ main.o sorts.o testsorts.o arraywork.o statarray.o -o sortslearn

main.o: main.cpp
	g++ -c main.cpp

sorts.o : sorts.cpp
	g++ -c sorts.cpp

testsorts.o : testsorts.cpp
	g++ -c testsorts.cpp

arraywork.o : arraywork.cpp
	g++ -c arraywork.cpp

statarray.o : statarray.cpp
	g++ -c statarray.cpp

clean:
	rm -rf *.o sortsLearn                                
