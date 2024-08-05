sol: main.cpp
	g++ main.cpp -g -o2 -o solution 
	./solution < in.txt > out.txt
compile:main.cpp
	g++ main.cpp -g -o solution 
debug:main.cpp
	g++ main.cpp -g -o build/Debug/main.o
run :
	./solution <in.txt > out.txt
new:
	cp templates/template.cpp main.cpp
delete:
	rm -rf sol*
	rm *.cpp
clear:
	rm -rf solution