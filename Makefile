CXX = g++

SRC_DIR = ./src
INC_DIR = ./include
LIB_DIR = ./lib

SOURCES = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/*.cpp)

EXECUTABLE = main

FLAGS = -I$(INC_DIR) -L$(LIB_DIR) -g -Wall
LIBS = glfw3 opengl32 gdi32 user32
LIB_FLAGS = $(addprefix -l, $(LIBS))

.PHONY: all
all:
	$(CXX) $(SOURCES) $(FLAGS) $(LIB_FLAGS) -o $(EXECUTABLE)