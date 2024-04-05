CC = gcc
CFLAGS = -W -Wall -Werror -std=c99 -pedantic
LDFLAGS =

SRC_DIR = src

SRC_FILES = $(SRC_DIR)/StrBasics.c $(SRC_DIR)/StrPart1.c $(SRC_DIR)/StrPart2.c 

OBJ_FILES = $(SRC_FILES:.c=.o)

STATIC_LIB = libmystring.a

SHARED_LIB = libmystring.so

all: libmystring

libmystring: static shared

static:	$(OBJ_FILES)
	ar	rcs	$(STATIC_LIB)	$(OBJ_FILES)

shared:	$(OBJ_FILES)
	$(CC)	$(LDFLAGS)	-shared	-o	$(SHARED_LIB)	$(OBJ_FILES)

%.o:	%.c
	$(CC)	$(CFLAGS)	-c	$<	-o	$@

clean:
	rm	-f	$(OBJ_FILES)	$(STATIC_LIB)	$(SHARED_LIB)

dist:	clean
	tar	-czvf project_archive.x-MiniProjet2.tar.gz *

distclean:	clean
	rm	-f	project_archive.x-MiniProjet2.tar.gz

check:
	

.PHONY:	all libmystring static shared clean dist distclean check