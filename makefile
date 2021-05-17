libdir=/usr/lib/libprotobuf.so.17
cppfile=./Person.pb.cc ./Person_test.cpp

main:
	g++ -g -o test.o -std=c++11 $(cppfile) $(libdir) -lpthread
clean:
	rm -f test.o