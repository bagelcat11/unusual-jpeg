EXECS=main
RAYLIB_FLAGS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

.PHONY: all
all: $(EXECS).o
	gcc $(EXECS).o $(RAYLIB_FLAGS) -o unusual-jpeg

%.o: %.c
	gcc -c $<

.PHONY: clean
clean:
	rm *.o $(EXECS)
