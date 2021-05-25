#include<iostream>
#include<Eigen/Dense>

int main()
{
	Eigen::MatrixXd A(2,2);
	A<<2,-1,1,3;
	std::cout<<"here is the input matrix A before decomposition:\n"<<A<<std::endl;
	//Lu,cholesky,and Qr decompostions can operate inplace that is, directly within the given input matrix.
	// This feature is especially useful when dealing with huge matrices, and or when the available memory is
	// very limited( especially in embedded systems). To this end, the respective class must be instantiated 
	// with a Ref<> matrix type, and the decomposition object must be constructed with the input matrix as argument.
	//As an example, let us consider an inplace LU decomposition with partial pivoting.
	Eigen::PartialPivLU<Eigen::MatrixXd> lu(A);
	std::cout<<"Here is the input matrix after decomposition\n"<<A<<std::endl;
	return 0;
}

