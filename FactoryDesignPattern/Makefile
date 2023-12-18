# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++14

# Directories
SRC_DIR = src
BUILD_DIR = build
LIB_DIR = lib
CLIENT_DIR = client

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
# Object files
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Library name
LIB_NAME = libvehicle.a
LIB = $(LIB_DIR)/$(LIB_NAME)

# Client file
CLIENT_SRC = $(CLIENT_DIR)/client.cpp
CLIENT_OBJ = $(BUILD_DIR)/client.o
CLIENT_EXEC = clientExec

# Targets
all: $(LIB) $(CLIENT_EXEC)

$(LIB): $(OBJS) | $(LIB_DIR)
	ar rcs $@ $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(CLIENT_EXEC): $(CLIENT_OBJ) $(LIB)
	$(CXX) $(CXXFLAGS) $< -o $@ -L$(LIB_DIR) -lvehicle

$(CLIENT_OBJ): $(CLIENT_SRC) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I$(SRC_DIR)

$(BUILD_DIR) $(LIB_DIR):
	mkdir -p $@

clean:
	rm -rf clientExec $(BUILD_DIR)

.PHONY: all clean
