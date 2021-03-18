SRCS = $(wildcard ./*.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
CXXFLAG = -std=c++03 -g -O2 -ggdb 
INC_PATH = ../sqlines/

TARGET = sqlparser
$(TARGET) : $(OBJS)
	ar -rcs $(TARGET).a $^
$(OBJS) : %.o : %.cpp
	g++ $(CXXFLAG) -c $^ -o $@ -I$(INC_PATH) -fpermissive

.PHONY = clean
clean : 
	rm -rf *.o *.a
