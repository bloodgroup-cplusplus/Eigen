#include<iostream>
#include<Eigen/Dense>
using Eigen::MatrixXd;
int main()
{
	MatrixXd m(2,2);//declare a 2*2 Matrix;
	//Initialize the values manually
	m(0,0)=3;
	m(1,0)=2.5;
	m(0,1)=1;
	m(1,1)=m(1,0)+m(0,1);
	// Print the first row and first column
	std::cout<<m(0,0)<<std::endl;
	return 0;
}

// compile the file using proper flags
// g++ -I/usr/include/eigen/filename.cpp -o filename
//./filename
