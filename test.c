#include <iostream>
#include <cstdio>
using namespace std;

int multiply(int x, int y){
  return x*y;
}

int main(){
  scanf("%d %d",&x,&y);
  int res = multiply(x, y);
  printf("%d\n",res);
  return 0;
}
