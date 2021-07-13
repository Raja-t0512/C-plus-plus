#include <iostream>
using namespace std;
static int a=1;
template <class T>
class Vector
{
private:
    int size;
    T *arr;

public:
    Vector(int size)
    {
        this->size = size;
        arr = new T[size];
        setdata();
    }
    void setdata()
    {
        cout<<"Enter coefficients of vector "<<a<<endl;;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        a++;
    }
    T dotproduct(Vector &v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum = sum + arr[i] * v.arr[i];
        }
        return sum;
    }
};
int main()
{
    int size;
    cout<<"Enter size of vector: ";
    cin>>size;
    Vector <int> v1(size);
    Vector <int> v2(size);
    int x= v1.dotproduct(v2);
    cout<<"Dot Product: "<<x<<endl;
    return 0;
}