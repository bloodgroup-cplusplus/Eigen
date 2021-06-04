#include<iostream>
#include<eigen3/Eigen/Dense>
int main()
{
	Eigen::MatrixXf A= Eigen::MatrixXf::Random(3,2);
	Eigen::VectorXf b= Eigen::VectorXf::Random(3);
	std::cout<<"The solution using QR decompositon is:\n"<<A.colPivHouseholderQr().solve(b)<<std::endl;
	return 0;
}
