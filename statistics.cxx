#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void fill (double* x, int N){
    for (int i = 0; i<N; i++)
      x[i] = 1.0*rand()/RAND_MAX;
}

void meanvar (double& m, double& v, double* x, int N){
    m = 0;
    v = 0;
    for (int i = 0; i<N; i++)
      m += x[i];
    m /= N;
    for (int i = 0; i<N; i++)
      v += (x[i]-m)*(x[i]-m);
    v /= N;
}

int main(){
   srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;
   
   fill (p, N);
   meanvar (mean, var, p, N);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
