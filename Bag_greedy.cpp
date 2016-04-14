#include <iostream>
#include <map>
using namespace std;
int const MaxLen = 50;  
 

class Knapsack
{
    public:
        Knapsack(int n,float mSize,float *wei,float *prof);
        void GreedyKnapsack(float *x);
  void sort_weigh();
  float *w;
    private:
        float m;
        float *p;
        int n;
        
};

 


Knapsack::Knapsack(int n,float mSize,float *wei,float *prof)
{
    m = mSize;
    this->n = n;
    w = new float[MaxLen];
    p = new float[MaxLen];
 int i = 0;
    for (i = 0; i<n;i++)
    w[i] = wei[i];
    for (i = 0; i<n;i++)
    p[i] = prof[i];
    
}

 


void Knapsack::GreedyKnapsack(float *x)
{
n = 3;
sort_weigh();
    float u = m;
    int i;
    for (i = 0;i<n;i++) x[i] = 0;
 //cout << u << endl;
 //for(i = 0; i < n; i ++) cout << w[i] << endl;
    for (i = 0;i<n;i++)
    {
        if (w[i]>u) break;
        x[i]=1.0;
        u = u - w[i];
  //printf("%d %lf\n", i, u);
    }
    if (i<n) x[i]=u/w[i];
}

 


void Knapsack::sort_weigh()
{
 n =3;
 int i = n-1;
 float *x = new float[MaxLen];
 map <float,float> m1;
    map <float,float>::iterator m1_Iter;
    for (i = 0;i<n;i++){
    m1.insert ( pair <float, float>  ( p[i]/w[i], w[i] ) );
    }
    i = n - 1;
    for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ ){
  x[i] = m1_Iter->second;
  //printf("%d %lf\n", i, x[i]);
  i--;
    }
 //for(i = 0; i < n; i++) cout << x[i] << endl;
    for (i = 0; i<n;i++){
    w[i] = x[i];
 //cout << w[i] << endl;
 }
}


int main(void)
{
 int i =0;
 int n,m;
 scanf("n:%d m:%d",&n,&m);
// float *w = new float[MaxLen];
// float *p = new float[MaxLen];
float *w1 = new float[MaxLen];
float *p1 = new float[MaxLen];
printf("input w:\n");
for(i=0;i<n;i++) cin>>w1[i];
printf("input p:\n");
for(i=0;i<n;i++) cin>>p1[i];
Knapsack knapsack(n,m,w1,p1);
float *x = new float[MaxLen];
knapsack.GreedyKnapsack(x);
for (i = 0;i<3;i++)
{
cout<<knapsack.w[i]<<":"<<x[i]<<endl;
}
    return 0;
}