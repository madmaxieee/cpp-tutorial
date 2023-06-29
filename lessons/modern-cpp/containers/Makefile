CC = g++ -std=c++2a
C_FLAGS = -c
OPT_FLAGS = -O3

BIN_DIR = ./bin
SOURCE_DIR = ./src

$(shell mkdir -p $(BIN_DIR))

all: $(BIN_DIR)/array-like $(BIN_DIR)/stack-queue $(BIN_DIR)/heaps $(BIN_DIR)/maps $(BIN_DIR)/sets

$(BIN_DIR)/%: $(SOURCE_DIR)/%.cpp
	$(CC) $(OPT_FLAGS) $^ -o $@

run:
	$(BIN_DIR)/$(APP)

clean:
	rm -rf $(BIN_DIR)/*.o $(BIN_DIR)/$(APP)
