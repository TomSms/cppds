#include "seqlist.h"

bool seqlist::insertVal(int pos,int val){
	if(_cur+1 > _len) return false;
	if(_cur+1 < pos)   return false;
	if(pos < 0) 	   return false;
	for(int i = _cur+1;i>pos;i--){
		_a[i] = _a[i-1];
	}
	_a[pos] = val;
	_cur++;
	return true;
}

bool seqlist::deleteVal(int pos,int *val){
	if(pos > _cur || pos < 0) return false;
	*val = _a[pos];
	for(int i = pos;i<_cur;i++){
		_a[i] = _a[i+1];
	}
	_a[_cur--] = 0;
	return true;
}

bool seqlist::modifyVal(int pos,int val){
	if(pos > _cur || pos < 0) return false;
	_a[pos] = val;
	return true;
}

bool seqlist::getVal(int pos,int *val){
	if(pos > _cur || pos < 0) return false;
	*val = _a[pos];
	return true;
}

