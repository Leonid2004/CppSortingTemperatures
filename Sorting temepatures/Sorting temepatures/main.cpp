//
//  main.cpp
//  Sorting temepatures
//
//  Created by Leonid on 18.01.2021.
//

#include <iostream>
#include <vector>

using namespace std;

vector <int> analyzeTemps (vector<int> t,int vSize) {
    vector<int> T;//final array which will consist of number of days
    int value;
    for (int i = 0; i < vSize; i++) {
    	cout <<i+1<<"-temperature:"<<endl;
    	cin>>value;
    	t.push_back(value);
	}
    
    
    for (int i = 0; i < t.size();i++) {
    	for (int j = i; j < t.size()-1;j++) {
    		
    		if (t[i] < t[j+1]) {
    			T.push_back((j+1)-i);
    			break;
			}
		}
	}
    
    return T;
    
}

int main() {

	vector <int> vV;
   vector <int> result = analyzeTemps(vV,7);
    
    for (int i = 0; i < result.size();i++) {
    	cout <<result[i]<<" ";
	}
    
    
    return 0;
}
