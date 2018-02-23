#include "utilities.h"
#include <cstdlib>
#include <ctime>

vector<instance> readData(string filename,int nfeatures){
	ifstream fin(filename,ios::in);
	vector<instance> vec;
	while(!fin.eof()){
		attr v(nfeatures);
		int op;
		char c;
		for(int i=0;i<nfeatures;i++){
			fin>>v[i]>>c;
		}
		fin>>op;
		vec.push_back(make_pair(v,op));
	}
	return vec;
}

Matrix<double> gradient_descent_optimizer(const std::function<double(Matrix<double>)> &function,
										 const std::function<Matrix<double>(Matrix<double>)> &derivatives,
										 double learning_rate,
										 double n_params){
	
	
	double eta=0.0001;

	srand(time());
	Matrix<double> w(n_params,1);
	for(int i=0;i<n_params;i++){
		w[i][0]=rand()%100;
	}

	while(){
		Matrix<double> dv=derivatives(w);
		w=w-
	}
}