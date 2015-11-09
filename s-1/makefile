# pushd C:\WORKS\WS\Eclipse_Luna\DSP_C\s-1

ROOT_DIR	:= C:\WORKS\WS\Eclipse_Luna\DSP_C\s-1
C_SRCS_TRUNK	:= s-1_1
C_SRCS := $(C_SRCS_TRUNK).c
#C_SRCS := s-1_1.c
C_OBJ := $(C_SRCS_TRUNK).o
#C_OBJ := s-1_1.o

C_FILES	:= wave.c

C_EXE := $(C_SRCS_TRUNK).exe
#C_EXE := s-1_1.exe

INC:=	-I.

RM	:= del

CC	:= gcc

#VAR	:= ffffff

#######################################
#######################################

all: $(C_EXE)

$(C_EXE): clean

	echo $(CC)  $(ROOT_DIR)\$(C_SRCS) $(ROOT_DIR)\$(C_FILES) -o $(ROOT_DIR)\$(C_EXE) $(INC)
#	echo $(CC)  $(ROOT_DIR)\$(C_SRCS) -o $(ROOT_DIR)\$(C_EXE) $(INC)
	$(CC)  $(ROOT_DIR)\$(C_SRCS) -o $(ROOT_DIR)\$(C_EXE) $(INC)
#	$(CC)  $(ROOT_DIR)\$(C_SRCS) -o $(ROOT_DIR)\$(C_EXE)
#	$(CC)  $(C_SRCS) -o $(C_EXE)

#	echo yes

clean:
	
	$(RM) $(ROOT_DIR)\$(C_EXE)
	
test:

	echo $(VAR)
