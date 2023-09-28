
certificate:
	@echo "Certificate of use: Target 'certificate' was executed successfully."

# Target for running external scripts or utilities (e.g., wc)
run-script:
	./current_date.sh
CC = gcc
CFLAGS = -Wall

# Default target
all: factorial

factorial: factorial.c
	$(CC) $(CFLAGS) -o factorial factorial.c

test: all
	./factorial

install: all
	mkdir -p /usr/local/bin
	cp factorial /usr/local/bin/

dist:
	mkdir -p dist
	cp factorial dist/
	# Add other project files to dist/ as needed

docs: factorial.c
	doxygen Doxyfile

clean:
	rm -f factorial
	# Add other cleanup actions as needed

distclean: clean
	rm -rf dist

.PHONY: all test install dist docs clean distclean

