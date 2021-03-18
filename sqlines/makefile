SRCS += $(wildcard ./*.cpp)
CXXFLAG = -g -O2 -ggdb 
TARGET = sqlines
SUB_TARGET = ../sqlparser/sqlparser.a
SRCS += $(SUB_TARGET)
subdir = ../sqlparser/
$(TARGET) : $(SRCS)
	g++ $(CXXFLAG) -o $(TARGET) $^  -fpermissive
$(SUB_TARGET):
	make -C ../sqlparser 

.PHONY = clean
clean :
	rm -rf *.o $(TARGET) $(TARGET).log
	make -C ../sqlparser clean
