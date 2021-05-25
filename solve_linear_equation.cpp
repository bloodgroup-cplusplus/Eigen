#include<iostream>
#include<Eigen/Dense>
int main()
{
	Eigen::Matrix3f A;
	Eigen::Vector3f b;
	A<<1,2,3,4,5,6,7,8,10;
	b<<3,3,4;
	std::cout<<"Here is the matrix A:\n"<<A<<std::endl;
	std::cout<<"here is the vecotr b:\n"<<b<<std::endl;
	Eigen::Vector3f x=A.colPivHousholderQr().solve(b);
	std::cout<<"The solution of A*x=b(i.e the value of vector x is)::\n"<<x<<std::endl;
	return 0;
}


// compile using g++ -I/usr/inlude/eigen or eigen3 depending/ progname.cpp -o progname
//./progname
