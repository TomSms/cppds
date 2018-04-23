CC=g++
CCFLAG=-g -Wall -c
OUTFLAG=-o
app:seqlisttest.o seqlist.o
	$(CC) $(OUTFLAG) $@ $^
seqlisttest.o: seqlisttest.cpp seqlist.h
	$(CC) $(CCFLAG) $^
seqlist.o: seqlist.h seqlist.cpp
	$(CC) $(CCFLAG) $^
clean:
	rm *.o *.gch
