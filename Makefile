CC := g++
CFLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out
.RECIPEPREFIX +=

all: main

intruso:
	@mkdir build/intruso
	$(CC) $(CFLAGS) -c src/intruso.cpp -o build/intruso.o


main: intruso
	$(CC) -g $(CFLAGS) build/intruso.o  src/main.cpp -o $(TARGET)

clean: 
$(RM) -r $(BUILD)/* $(TARGET)