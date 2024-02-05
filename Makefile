build:
	gcc -Wall -std=c99 ./*.c -o CarsGame -lSDL2 -lSDL2_ttf -lSDL2_image -lSDL2_mixer

run:
	./CarsGame

clean:
	rm CarsGame

br:
	gcc -Wall -std=c99 ./*.c -o CarsGame -lSDL2 -lSDL2_ttf -lSDL2_image -lSDL2_mixer
	./CarsGame
