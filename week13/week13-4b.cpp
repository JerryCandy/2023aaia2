#include <stdio.h>
using namespace std;
int GCD(int a, int b){
  if(a==0) return b;
  if(b==0) return a;
  return GCD(b, a%b);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",GCD(a,b) );
}
