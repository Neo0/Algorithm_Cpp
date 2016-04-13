#include <iostream>
#include <algorithm>



bool compare(int a,int b)
{
  return a>b;
}


template<class T>
class Knapsack
{
    public:
        Knapsack(int mSize,float cap,float *wei,T *prof);
        void sort_weigh();
        void GreedyKnapsack(float *x);
    
    private:
        float m,*w;
        T *p;
        int n;
};

template<class T>
Knapsack<T>::Knapsack(int mSize,float cap,float *wei,T *prof)
{
    float m = mSize;
    float *w = wei;
    T *p = prof;
    int n = sizeof(wei)/sizeof(wei[0]);
}

template<class T>
void Knapsack<T>::GreedyKnapsack(float *x)
{
    float u = m;
    for (int i = 0;i<n;i++) x[i] = 0;
    for (i = 0;i<n;i++)
    {
        if (w[i]>u) break;
        x[i]=1.0;
        u = u - w[i];
    }
    if (i<n) x[i]=u/w[i];
}

template<class T>
void Knapsack<T>::sort_weigh()
{
    sort(w,w+n,compare);
}

int main(void)
{
    return 0;
}