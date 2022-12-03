#include "lib.h"
bool primi(int n){
  int div=1;
  int conta=0;
  while(conta<=1 && div<=n/2){
    if(n%div=0){
      conta++;
    }
    else{
    div++;
  }
  if(conta==1){
    return true;
  }
   else{
    return false;
  }
