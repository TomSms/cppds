#include <iostream>
#include "seqlist.h"

class seqlist;
int main(int argc,char* argv[]){
	seqlist * seq = new seqlist(5);
	
	for(int i = 0;i< 10;i++){
		std::cout << "i:"<<i << " insert:"<< seq->insertVal(i,i) << std::endl;
	}
	delete seq;
	return 0;
}
