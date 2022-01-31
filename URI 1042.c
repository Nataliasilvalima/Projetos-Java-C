#include <stdio.h>
 
int main() {
 
  int A , B , C , X ,Y ,Z ,temp ;
  
  scanf("%d %d %d", &A ,&B,&C);
  
  X = A ;
  Y = B ;
  Z = C ;

   if (X > Y){
   	temp = X;
   	X = Y ;
   	Y = temp;}
   	
   	if (X> Z){
   	temp = X;
   	X = Z ;
   	Z = temp; }
   	
 if (Y > Z){
 	temp = Y;
 	Y = Z;
 	Z = temp;}
   	
printf("%d\n%d\n%d\n", X ,Y ,Z);
printf("\n%d\n%d\n%d\n", A ,B ,C);   	

return 0;

   }
