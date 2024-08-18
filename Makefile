all:
	g++ src/main.cpp src/glad.c -o main -Iinclude -Llib -lglfw3 -lgdi32 -lopengl32