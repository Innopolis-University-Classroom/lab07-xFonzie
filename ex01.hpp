
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template <class T>
void multiples (T& sum, T x, int n)
{
    sum = 1 + (n * (n + 1) / 2) * x;
}