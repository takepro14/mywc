CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRCDIR = src
BINDIR = bin
TARGET = $(BINDIR)/mywc
SOURCES = $(SRCDIR)/main.c $(SRCDIR)/mywc.c

all: prepare $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

prepare:
	mkdir -p $(BINDIR)

clean:
	rm -rf $(BINDIR)

