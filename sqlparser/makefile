SRCS = $(wildcard ./*.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
INC_PATH = ../sqlines/

TARGET = sqlparser
$(TARGET) : $(OBJS)
	ar -rcs $(TARGET).a $^
$(OBJS) : %.o : %.cpp
	g++ -c $^ -o $@ -I$(INC_PATH) -fpermissive

.PHONY = clean
clean : 
	rm -rf *.o *.a
