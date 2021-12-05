#include <bits/stdc++.h>
#include <vector>
using namespace std;
 

template <class T>
vector <vector <T>> create_matrix (T x, int rows, int cols){
	vector <vector <T>> v;
	vector <T> w;
	for (int j=0;j<cols;j++){
			w.push_back(x);}
	for (int i=0;i<rows;i++){
		v.push_back(w);}
	return v;
}

int main()
{	string x;
	int rows, cols;
	cin>>x;
	cin>>rows>>cols;
	for (int i=0;i<create_matrix (x,rows,cols).size();i++){
		for (int j=0;j<create_matrix (x,rows,cols)[i].size();j++){
			cout<<create_matrix (x,rows,cols)[i][j]<<" ";}
		cout<<endl;}



		
return 0;
}
