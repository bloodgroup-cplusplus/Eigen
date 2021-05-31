// Eigen does not expose convenient methods to take slices or to reshape a matrix yet. Nonetheless, such features can easily be emulated using the Map class.
//Reshape
//A reshape operation consists in modifying the sizes of a matrix while keeping the same coefficients. 
//Instead of modifying the input matrix itself, 
//which is not possible for compile-time sizes, 
//the approach consist in creating a different view on the storage using class Map.
//Here is a typical example creating a 1D linear view of a matrix:


#include<eigen3/Eigen/Dense>
#include<iostream>

int main()
{
	Eigen::MatrixXf M1(3,3);
	M1<<1,2,3,
		4,5,6,
		7,8,9;
	Eigen::Map<Eigen::RowVectorXf> v1(M1.data(),M1.size());
	std::cout<<"V1:"<<std::endl<<v1<<std::endl;
	Eigen::Matrix<float,Eigen::Dynamic,Eigen::Dynamic,Eigen::RowMajor>M2(M1);
	Eigen::Map<Eigen::RowVectorXf> v2(M2.data(),M2.size());
	std::cout<<"v2:"<<std::endl<<v2<<std::endl;
	return 0;
}
