OBJECTS=main.o lossy_operations.o
HEADERS=lossy_operations.h
RAYLIB_FLAGS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

.PHONY: all
all: $(OBJECTS) $(HEADERS)
	gcc $(OBJECTS) $(RAYLIB_FLAGS) -o unusual-jpeg

%.o: %.c $(HEADERS)
	gcc -c $<

.PHONY: clean
clean:
	rm *.o $(OBJECTS) unusual-jpeg
