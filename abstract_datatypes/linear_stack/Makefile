#OBJS specifies which files to compile as part of the project
OBJS = main.c linear_stack.c

#CC specifies which compiler will be used
CC = gcc

#COMPILER_FLAGS specifies the additional compilation options
# -w suppresses all warnings
COMPILER_FLAGS = -Wall -g

#LINKER_FLAGS specifies the libraries that will be linked against
LINKER_FLAGS = 

#OBJ_NAME specifies the name of the exectuable
OBJ_NAME = linear_stack

#This is the target that compiles the executable
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
