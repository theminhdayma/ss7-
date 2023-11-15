#include <stdio.h>
#include <math.h>
main(){
	int i,hundreds,dozens,unit_row,sum;
	for(i=100;i<1000;i++){
		hundreds=i/100;
		dozens=(i%100)/10;
		unit_row=i%10;
		sum=pow(hundreds,3)+pow(dozens,3)+pow(unit_row,3);
		if(sum==i){
			printf("%d la so Armstrong\n",i);
		}
	}
}
