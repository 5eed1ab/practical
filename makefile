# ==========================================
# Compiler and Flags Configuration
# ==========================================
CC       := gcc
CFLAGS   := -Wall -Wextra -Werror -std=c11 -g
TARGET   := practical

# ==========================================
# File Tracking (Automatic Discovery)
# ==========================================
# Find all .c files in the current folder
SRCS     := $(wildcard *.c)
# Convert the list of .c files into a list of .o files
OBJS     := $(SRCS:%.c=%.o)

# ==========================================
# Build Rules
# ==========================================

# Default target rule
all: $(TARGET)

# Rule to link the final executable binary
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule to automatically compile any .c file into a .o file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# ==========================================
# Utilities
# ==========================================

# Clean up build artifacts safely
.PHONY: all clean

clean:
	rm -f $(OBJS) $(TARGET)
