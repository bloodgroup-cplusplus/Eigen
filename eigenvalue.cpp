// this code is used to find an eigen value and eigen vector for a 2*2 float matrix

#include<iostream>
#include<Eigen/Dense>
#include<Eigen/Eigenvalues>

int main()
{
    Eigen::MatrixXd A=Eigen::MatrixXd::Random(6,6);
    std::cout<<"here is a random 6*6 matrix, A:"<<std::endl;
    std::cout<<A<<std::endl;;;
    Eigen::EigenSolver<Eigen::MatrixXd> es(A);
    std::cout<<"The eigenvalues of A are :"<<std::endl;
    std::cout<<es.eigenvalues()<<std::endl;
    
    return 0;
}
//compile using the following command
// g++ -I/usr/include/eigen3/ progname.cpp -o progname
//./progname
