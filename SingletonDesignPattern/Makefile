# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++14

# Directories
SRC_DIR = src
BUILD_DIR = build

CLIENT_EXEC = clientExec

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
# Object files
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Targets
all: $(OBJS) $(CLIENT_EXEC)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(CLIENT_EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ -lpthread

$(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf clientExec $(BUILD_DIR)

.PHONY: all clean
