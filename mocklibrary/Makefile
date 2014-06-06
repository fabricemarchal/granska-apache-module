
mocklibrary:
	g++ -fPIC -c mockgranska.cpp -o mockgranska.o 
	g++ -shared -o libmockgranska.so mockgranska.o
	$(INSTALL) mockgranska.h /usr/local/include
	$(INSTALL) libmockgranska.so /usr/local/lib