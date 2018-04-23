#ifndef _HM_SEQLIST_H_
#define _HM_SEQLIST_H_
#define SEQLIST_DEFAULT_LEN 10
class seqlist{
protected:
	int _len;
	int _cur;
	int *_a;
public:
	seqlist(int len){
		if(len > 0 ) _len = len;
		else len = SEQLIST_DEFAULT_LEN;
		_cur = 0;
		_a = new int[len];
	}
	~seqlist(){
		delete [] _a;
	}
        inline int getCurLen() const { return _cur;}
	inline int getLen() const {return _len;}
	inline int isNull() const { return _cur == 0;}
        bool insertVal(int pos,int val);
	bool deleteVal(int pos,int *val);
	bool modifyVal(int pos,int val);
	bool getVal(int pos,int *val);
	
	
};
#endif
