TARGET = build/ceural_network

build:
	@mkdir -p build
	@gcc -Wall -o $(TARGET) src/*.c
	@echo "[make] build complete : $(TARGET)"

run: build
	@./$(TARGET)

clean:
	@rm -rf build/
	@echo "[make] cleared build/ folder"

.PHONY: build run clean