CC = gcc
TARGET = build/ceural_network
INCDIR = include

build:
	@mkdir -p build
	@$(CC) -Wall -I$(INCDIR) -o $(TARGET) src/*.c
	@echo "[make] build complete : $(TARGET)"

run: build
	@./$(TARGET)

clean:
	@rm -rf build/
	@echo "[make] cleared build/ folder"

.PHONY: build run clean