all: main test

run: src/main.cpp src/myheader.cpp
	g++ src/main.cpp src/myheader.cpp -Iinclude -o build/main
	./build/main	

test: tests/greet_test.cpp src/myheader.cpp
	g++ tests/greet_test.cpp src/myheader.cpp -Iinclude -o build/test_greet
	./build/test_greet

clean:
	rm -f build/main build/test_greet