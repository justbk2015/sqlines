SRCS += $(wildcard ./*.cpp)
TARGET = sqlines
SUB_TARGET = ../sqlparser/sqlparser.a
SRCS += $(SUB_TARGET)
subdir = ../sqlparser/
$(TARGET) : $(SRCS)
	g++ -o $(TARGET) $^  -fpermissive
$(SUB_TARGET):
	make -C ../sqlparser 

.PHONY = clean
clean :
	rm -rf *.o $(TARGET) $(TARGET).log
	make -C ../sqlparser clean
