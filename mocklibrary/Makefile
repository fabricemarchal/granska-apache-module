
mocklibrary:
	g++ -fPIC -c granska_api.cpp -o granska_api.o
	g++ -fPIC -c mockgranska.cpp -o mockgranska.o 
	g++ -shared -o libmockgranska.so mockgranska.o granska_api.o
	install mockgranska.h /usr/local/include
	install libmockgranska.so /usr/local/lib
	
test:	mocklibrary
	g++ testmock.cpp  -lmockgranska -o testmock
	
clean:
	rm -f testmock *.o *.so