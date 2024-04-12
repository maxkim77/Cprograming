int mp(int base, int exp);
int main(){
   int res;
   res = mp(2,10);
   printf("%d",res);
   return 0;
}

int mp(int base, int exp) {
   int res = 1; // 0^0 = 1
   for(int i=0; i < exp; i++){ // 2^10 = 2*2*2*2*2*2*2*2*2*2
      res = res * base; // res = 1*2 = 2
   }
   
   return res; // 1024
}