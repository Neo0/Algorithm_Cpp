#include <iostream>


template<class T>

class Knapsack
{
    public:
        Knapsack(int mSize.float cap,float *wei,T *prof);
        void GreedyKnapsack(flaot *x);
    
    private:
        float m,*w;
        T *p;
        int n;
};

template<class T>
Knapsack<T>::Knapsack()

template<class T>
void Knapsack<T>::GreedyKnapsack(float *x)
{
    float u = m;
    for (int i = 0;i<=n;i++)
    {
        if (w[i]>u) break;
        x[i]=1.0;
        u = u[i];
    }
    if (i<n) x[i]=u/w[i];
}

template<class T>
void Knapsack<T>::sort_weigh()
{
    
}
