TARGET = $(BIN_DIR)/myprog
OBJ_DIR = ../obj
BIN_DIR = ../BIN
INCDIR = ../inc
SRC_DIR = .
OBJS = $(OBJ_DIR)/main.o\ 
		$(OBJ_DIR)/com.o

CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)

$(TARGET) : $(OBJS) 
	mkdir -p $(BIN_DIR)
	gcc $(FLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	gcc -c -MD $(CFLAGS) $< -o $@

-include $(OBJ_DIR(/*.d

.PHONY : clean 
clean : 
	@rm -r $(OBJ_DIR) $(BIN_DIR)

