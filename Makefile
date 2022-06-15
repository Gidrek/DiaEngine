compile:
	clang++ -g src/*.cpp src/engine/*.cpp \
	-o build/game \
	-I/opt/homebrew/include \
	-I./include \
	-L/opt/homebrew/lib \
	-lglfw

run:
	./build/game

clean:
	rm /build/game