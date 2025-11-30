OBJECTS=main
RAYLIB_FLAGS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

.PHONY: all
all: $(OBJECTS).o
	gcc $(OBJECTS).o $(RAYLIB_FLAGS) -o unusual-jpeg

%.o: %.c
	gcc -c $<

.PHONY: clean
clean:
	rm *.o $(OBJECTS).o unusual-jpeg
