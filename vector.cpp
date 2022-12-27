#include<bits/stdc++.h>
using namespace std;
void print(vector<int>data)
{
    cout<< "total elements: " << data.size() << "\n";
    for(int datam:data)
        cout<< datam << " ";
    cout<< "\n\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // 2 4 7 5 8 9
    // crate vector
    // vector<data type> name(elements size);
    //vector<int> data(5, 2); output = 2 2 2 2 2
    //vector<int> data({1,2,3,4,5}); output = 1 2 3 4 5
   // vector<int> data = {1,2,3,4,5};
   // vector<int> data2 = data;
    //print(data);
    //print(data2);
    // add elements
    // push_back== adding elements in the last position
    // vector name.push_back(element)
    //vector<int> data={1,2,3};
    //data.push_back(10);
    //data.push_back(11);
    // data.begin()
    // data.end()
    // data.insert(position, elements)
    //data.insert(data.begin()+2, 3, 5);
    //print(data);
    ///read
    vector<int> data= {1,2,3,4,5,6,7};
    //cout<< data[2] << "\n";
    //cout<< data.front()<< "\n";
    //cout<< data.back()<< "\n";
    //for(int d:data)
    //{
      //  cout<< d <<" ";
    //}
     //int ln = data.size();
    //for(int i=0; i<ln; i++)
    //{
      //  cout<< data[i] << " ";
    //}
     //int ln = data.size();
    //for(int i=2; i<ln-1; i++)
    //{
      //  cout<< data[i] << " ";
    //}
 //   int *d = data.data();
   // cout<< d[2];
   /// update
  // data[2]= 7;
   //print(data);
   ///swapping
  // vector<int> data2={4,8,9};
   //cout<< "before swap: \n";
   //print(data);
   //print(data2);
   //data.swap(data2);
   //cout<< "after swap: \n";
   //print(data);
   //print(data2);
 /// delete
    // cout<< "before delete: /n";
     //print(data);
     //data.pop_back();
     //cout<< "after delete: \n";
     //print(data);
   /// whole vector elements removing
     // cout<< "before clear: /n";
     //print(data);
     //data.clear();
     //cout<< "after clear: \n";
     //print(data);
   /// position wise erase
         cout<< "before erase: \n";
     print(data);
     data.erase(data.begin()+2, data.begin()+4);
     cout<< "after erase: \n";
     print(data);



    return 0;
}
