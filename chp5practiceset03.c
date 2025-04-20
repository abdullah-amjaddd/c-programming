//. Write a function to calculate force of attraction on a body of mass ‘m’ exerted
//  by earth. Consider g = 9.8m/s2
#include<stdio.h>
//force=massxweight
//weight=g so force=massxgravitationalconstant
float Force_of_attraction(int a,float b){
float force;
return force=a*b;
}
int main(){
int mass=150;
float g=9.8;
float force=Force_of_attraction(mass,g);
printf("The force of attraction is %0.f",force);
return 0;
 }