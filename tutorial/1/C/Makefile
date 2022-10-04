MF=	Makefile

# For Cirrus
#CC=	gcc

# For ARCHER
CC=	cc

CFLAGS=
LFLAGS=	-lm

EXE=	centrallimit

INC= \
	uni.h

SRC= \
	centrallimit.c \
	uni.c

#
# No need to edit below this line
#

.SUFFIXES:
.SUFFIXES: .c .o

OBJ=	$(SRC:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $<

all:	$(EXE)

$(OBJ):	$(INC)

$(EXE):	$(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LFLAGS)

$(OBJ):	$(MF)

clean:
	rm -f $(OBJ) $(EXE) core
