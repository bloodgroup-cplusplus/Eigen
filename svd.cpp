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

/*The svd algorithm factorizes a matrix into one matrix with orthogonal columns on with orthogonal rows (along with a diagonal matrix,
which contains the relative importance of each factor).

We would cleaerly expect that the values that appear most frequently in one topic would appear less frequently in the other.
otherwise that word wouldn't make a good choice to seperate out the two topics. Therefore, we expect the topics to be orthogonal
*/



