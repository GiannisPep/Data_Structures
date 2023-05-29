#ifndef COMPARATOR_H
#define COMPARATOR_H

#include <vector>

using namespace std;

template<typename T>class Comparator{
    private:
        vector<T> vector1;
        vector<T> vector2;
    public:
        Comparator(const vector<T>& v1,const vector<T>& v2);
        bool equals() const;
        bool operator!=(const Comparator<T>& other) const {return !equals(other);}
        bool operator!=(const T& value) const {return !equals(value);}
        bool equals(const T& value) const {return vector1 == vector2 && vector1 == value;}
};

template<typename T> Comparator<T>::Comparator(const vector<T>& v1,const vector<T>& v2){
    vector1=v1;
    vector2=v2;
}

template<typename T> bool Comparator<T>::equals() const{
    if (vector1.size()!=vector2.size())
        return false;
    for (int i=0; i<vector1.size();++i)
    {
        if (vector1[i]!=vector2[i])
            return false;
    }
    return true;
}
#endif