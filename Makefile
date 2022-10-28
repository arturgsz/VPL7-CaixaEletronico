CC := g++
CFLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out
.RECIPEPREFIX +=

all: main

main: 
    $(CC)  *.cpp -o $(TARGET)

clean: 
    $(RM) -r $(BUILD)/* $(TARGET)
