TARGET := NRV
CC := g++
CXXFLAG := -std=c++11
OBJS := main.o classA.o classB.o

$(TARGET): $(OBJS)
#	@echo what are $@
	$(CC) -Wall -o $@ $(OBJS)
%.o: %.cpp
#	@echo compiling $<
	$(CC) -Wall -c $(CXXFLAG) $<
.PHONY: clean run

run:
	make
	./$(TARGET)

clean:
	-rm *.o
	-rm $(TARGET)
