# Simple practice:
###################
# all: day12.cpp
# 	g++ day12.cpp -o day12.out
# clean:
# 	rm -f day12.out

# Simple practice 2:
###################
all: day12_13.out

day12_13.out:day12.o day13.o
	g++ -o day12_13.out day12.o day13.o
day12.o: day12.cpp a.h
	g++ -c day12.cpp
day13.o: day13.cpp b.h
	g++ -c day13.cpp 
	
.PHONY: clean
clean: 
	rm -rf day12.o day13.o day12_13.out