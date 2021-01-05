#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

template <typename T>
class AddElements
{
    private:
        T element;
    public:
        AddElements(const T& element):
            element {element}
        { }

        T add(const T& x)
        {
            return element + x;
        }
};

template <>
class AddElements<string>
{
    private:
        string element;
    public:
        AddElements(const string& element):
            element {element}
        { }

        string concatenate(const string& x)
        {
            return element + x;
        }
};
