#include <stdio.h>
char line[81];
int main(){
	scanf("%s",line);
	int ans=0;
	for(int i=0;line[i]!=0;i++){
		if(line[i]>='0' && line[i]<='9') ans++;
	}
	printf("%d\n",ans);
}