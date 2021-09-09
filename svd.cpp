#include<iostream>
#include<eigen3/Eigen/Dense>

int main()
{
	Eigen::MatrixXf A= Eigen::MatrixXf::Random(3,2);
	std::cout<<"The given matrix is"<<A<<std::endl;
	Eigen::VectorXf b= Eigen::VectorXf::Random(3);
	std::cout<<"Here is the right hand side b:\n"<< b<< std::endl;
	std::cout<<"The least-squares solution is:\n"<<A.bdcSvd(Eigen::ComputeThinU | Eigen::ComputeThinv).solve(b)<<std::endl;
	return 0;;
}
