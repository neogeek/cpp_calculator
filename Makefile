build:
	mkdir -p build
	g++ -std=c++17 src/simple.cpp -o build/simple
	g++ -std=c++17 src/complex.cpp -o build/complex

clean:
	rm -rf build/
