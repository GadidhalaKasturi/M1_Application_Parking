
#Target_name : Dependencies
#<TAB>command
PROJ_NAME = Feature
SRC = feature.c main.c

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


$(PROJ_NAME) : $(SRC)
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run : $(PROJ_NAME)
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean: 
	rm -rf *.out
