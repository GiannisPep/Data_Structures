#ifndef COMPARATOR_H
#define COMPARATOR_H

#include <vector>

using namespace std;

template<typename T>class Comparator{
    private:
        vector<T> vector1;
        vector<T> vector2;
    public:
        Comparator(vector<T>& v1,vector<T>& v2);
        bool equals();
};

template<typename T> Comparator<T>::Comparator(vector<T>& v1,vector<T>& v2){
    vector1=v1;
    vector2=v2;
}

template<typename T> bool Comparator<T>::equals(){
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