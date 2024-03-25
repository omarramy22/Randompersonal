#include <iostream>
#include <vector>
using namespace std;
template <typename T> 
vector <T> United (vector <T> A, vector <T> B); 
int main ()
{
vector <double> hamo {2, 23.4}; 
vector <double> shampo {3, 1.234, 5}; 
United (hamo, shampo); 

}
template <typename T> 
vector <T> United (vector <T> A, vector <T> B)
{
    vector <T> result; 
    for (int i =0 ; i < A.size(); i++) 
    {

        result.push_back(A[i]); 
    }
    for (int j = 0; j < B.size(); j++)
    {
         bool cond = false;
        for (int i = 0; i< A.size(); i++)
        {
            if (result[i] == B [j]) 
            cond = true;    
        }
        if (cond == false)
        result.push_back(B[j]); 

    }
    for (int i =0; i< result.size(); i++)
    {
        cout << "THE ELEMENT NUMBER " << i + 1 << " is " << result [i] << endl; 
    }
    return result;  

}