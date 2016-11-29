all:
	g++ driver.cpp calc.h calc.cpp -o exec
clean:
	rm -f exec 1

