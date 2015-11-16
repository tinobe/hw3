#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void fill(double* p, const int N){
for(int i=0;i<N;i++) p[i]=rand()/double(RAND_MAX);
}

void calc(double* p, const int N, double& mean, double& var){
   for(int i=0; i<N; i++) mean=mean+p[i]; // sum
   mean=mean/N; var=pow((p[0]-mean),2);  // divide by N
   for(int i=1; i<N; i++) var= var+ pow((p[i]-mean),2);  // sum
   var=var/N;   // divide by N
}

void print(double* p, const int N){
   for(int i=0; i<N; i++) cout << p[i] << endl;
}

int main(){
   const int N = 100;
   double p[N];
   double mean=0, var=0;

   srand(time(NULL));

   fill(p,N);  //  fill the array
   //print(p,N);  to check
   calc(p,N,mean,var);  // calculate the parameters

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
