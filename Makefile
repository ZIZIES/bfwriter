CC = gcc
CFLAGS = -Wall -Wextra -g
HEADERS = src/ascii.h src/util.h src/writer.h
BUILD_DIR = build
SRCS = src/main.c src/util.c src/writer.c

$(BUILD_DIR)/bfwriter: $(SRCS) $(HEADERS)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

run: $(BUILD_DIR)/bfwriter
	./$(BUILD_DIR)/bfwriter out.bf

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run
