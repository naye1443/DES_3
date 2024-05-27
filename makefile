CC = clang++ # Flag for implicit rules
CFLAGS = -std=c++17 -arch arm64 -stdlib=libc++ -g -Wall# Flag for implicit rules. Turn debug info
TARGET = DES3
INCLUDE = /usr/local/include
INCLUDE1 = ./include
LIBS = /usr/local/lib
LIB1 = gtest
LIB2 = gtest_main

$(TARGET): Binary.o BinaryTest.o
	$(CC) $(CFLAGS) -I $(INCLUDE) -I $(INCLUDE1) -L$(LIBS) -l$(LIB1) -l$(LIB2) -o $(TARGET) Binary.o BinaryTest.o

BinaryTest.o: ./Testing/BinaryTest.cpp ./include/Binary.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE) -I $(INCLUDE1) -c ./Testing/BinaryTest.cpp -o BinaryTest.o

Binary.o: ./src/Binary.cpp ./include/Binary.hpp
	$(CC) $(CFLAGS) -I $(INCLUDE) -I $(INCLUDE1) -c ./src/Binary.cpp -o Binary.o
	
clean:
	rm *.o finished