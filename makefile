compile_main:
	g++ -Wall -Wextra main.cpp -o lists

clean:
	rm -rf lists

document:
	autodoc *.cpp

