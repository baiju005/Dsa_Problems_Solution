# include <iostream>
# include <vector>
# include <climits>
using namespace std;
int main (){
    vector<int> vec={1, 3, 8,10,35,53,60,5,3,2,1,0};
    int st=1,end=vec.size()-2;
    while(st<=end){
        int mid=st+ (end-st)/2;

        if(vec[mid - 1] < vec[mid] && vec[mid]> vec[mid + 1]){
            cout << vec[mid] << endl;
            return 0;
        }
    if(vec[mid-1]< vec[mid]){// pick in increasing side
    st=mid+1;

    } else{ // pick in decreasing side
    end=mid-1;
    }

    }
 return 0;
}
