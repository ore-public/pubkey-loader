CC=gcc
CFLAGS=-Wall -std=c11

default: build
build:
	$(CC) $(CFLAGS) main.c -o bin/pubkey-loader