compile&&run: compile
	./bin/main.exe
compile:
	g++ -std=c++0x ./src/main.cpp -o ./bin/main