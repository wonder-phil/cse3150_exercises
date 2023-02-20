CC=c++
CFLAGS= -g -std=c++14 -Wall
LFLAGS= -g
OFILES=  week4.o unitTestWeek04.o  #All the .o's file that are going to be created ADD in all the .o's that are needed to make the function run
all: main

main: $(OFILES) # the main final executable  which takes all the ofiles and build the executable to run
	$(CC) $(LFLAGS) $(OFILES) -o $<

# rule of thumb with the file below is that you just copy paste and change the name with the new one such as week5.0 :week5.cpp week5.h and you are all set
week4.o : week4.cpp week4.h # All the temporary .o file creation  ... REQUIRED to have the .cpp and .h file for everything besides the file which has the main function
	$(CC) -c $(CFLAGS) $< 

unit_test.o : unit_test_.cpp # the main function .. this contains all the functionality/unittest test that are to be run
	$(CC) -c $(CFLAGS) $<

clean:# hardcode the final executable name which is given in the `all` above 
	rm -rf *.o *~ main 
