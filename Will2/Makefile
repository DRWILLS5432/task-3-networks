# Define the name of the output binary
BIN_NAME = factorial

# Source directory
SRC_DIR = /Users/user/will2

SRC_FILES = $(SRC_DIR)/factorial.c

# Build directory
BUILD_DIR = build

# Output directory for installation
INSTALL_DIR = /usr/local/bin

# Documentation files
DOCS_DIR = Docs
DOXYGEN_CONF = Doxyfile

# Additional scripts
WC_SCRIPT = wc_script.sh

# Compiler and flags
CC = gcc
CFLAGS = -Wall -O2

.PHONY: all clean install uninstall dist test doc help

all: $(BUILD_DIR)/$(BIN_NAME)

$(BUILD_DIR)/$(BIN_NAME): $(SRC_FILES)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $^

test: all
	@echo "Testing..."
	$(BUILD_DIR)/$(BIN_NAME)

install: all
	@echo "Installing..."
	@install -m 755 $(BUILD_DIR)/$(BIN_NAME) $(INSTALL_DIR)/$(BIN_NAME)

uninstall:
	@echo "Uninstalling..."
	@rm -f $(INSTALL_DIR)/$(BIN_NAME)

dist: clean
	@echo "Creating distribution tarball..."
	@mkdir -p dist/$(BIN_NAME)
	@cp -r $(SRC_DIR) $(DOCS_DIR) $(DOXYGEN_CONF) Makefile dist/$(BIN_NAME)
	@tar -czvf $(BIN_NAME).tar.gz -C dist .

doc: $(DOCS_DIR)/html/index.html

$(DOCS_DIR)/html/index.html: $(SRC_FILES) $(DOXYGEN_CONF)
	@echo "Generating documentation..."
	@doxygen $(DOXYGEN_CONF)

help:
	@echo "Available targets:"
	@echo "  all          : Compile the project"
	@echo "  test         : Run the compiled project"
	@echo "  install      : Install the project"
	@echo "  uninstall    : Uninstall the project"
	@echo "  dist         : Create a distribution tarball"
	@echo "  doc          : Generate documentation"
	@echo "  clean        : Clean up project files"
	@echo "  cleanall     : Complete clean, including build artifacts and distribution"
	@echo "  wc           : Run the word count script"

clean:
	@echo "Cleaning project (excluding distribution)..."
	@rm -rf $(BUILD_DIR)
	@rm -f $(DOCS_DIR)/*.pdf

cleanall: clean
	@echo "Complete cleaning, including distribution..."
	@rm -rf dist
	@rm -f $(BIN_NAME).tar.gz

wc:
	@./current_date.sh

