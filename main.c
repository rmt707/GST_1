#include <stdlib.h>
#include <stdio.h>

int MainFunctionality (int i){
	return i;
}

int main (){
	int ret = 0;
	for (int = 0; i < 10; i++){
		//Main functionality check
		if(MainFunctionality(i) == i){
			printf("SUCCESS: main functionality %d"\n, i);
		} else {
			printf("FAILED: main functionality %d\n", i);
			ret = -1;
		}
	}
	return ret;
}