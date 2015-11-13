#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void producer(double* p,const int N){
  for(int i=0; i<N; i++){
 p[i]=double(rand())/RAND_MAX;  //since rand() & RAND_MAX are both integer.
  }
}
void statistics(double* p,double& mean, double& var, const int N){
  mean=0;
 for(int i=0; i<N; i++){
   mean+=p[i];
 }
 mean=mean/N;
 
 var=0;
 for(int i=0; i<N; i++){
  var+=(p[i]-mean)*(p[i]-mean);
 }
 var=var/N;
}
int main(){
  srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;

   producer(p,N);
   statistics(p,mean,var,N);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;  
   //To make sure that there are really random numbers, use:
   /*for(int i=0; i<N; i++){
   cout<<i<<"\t"<<p[i]<<endl;
   }*/

   return 0;
}
