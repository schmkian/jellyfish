CC = g++
OUT = ./bin/jf.exe
SRC = $(wildcard src/*.cpp)
CFLAGS = -Wall -std=c++17 -Wfatal-errors -Wextra
RFLAGS = -g -O0

all:
	$(CC) $(SRC) -o $(OUT) $(CFLAGS) $(RFLAGS)