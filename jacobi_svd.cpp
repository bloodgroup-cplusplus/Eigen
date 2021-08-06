#include<Eigen/Dense>
#include<iostream>

int main()
{
        Eigen::MatrixXf m= Eigen::MatrixXf::Random(3,2);
        Eigen::JacobiSVD<Eigen::MatrixXf> svd(m,Eigen::ComputeThinU | Eigen::ComputeThinV);
        std::cout<<"The singularvaues using jaboi svd are "<<std::endl;
        std::cout<<svd.singularValues()<<std::endl;

        return 0;
}
         
