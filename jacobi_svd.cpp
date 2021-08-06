#include<Eigen/Dense>
#include<iostream>

int main()
{
        Eigen::MatrixXf m= Eigen::MatrixXf::Random(3,2);
        Eigen::JacobiSVD<Eigen::MatrixXf> svd(m,Eigen::ComputeThinU | Eigen::ComputeThinV);
        std::cout<<"The singularvaues using jaboi svd are "<<std::endl;
        std::cout<<svd.singularValues()<<std::endl;
        std::cout<<"Its left singular vectors are the columns of the thin U matrix:"<<std::endl<<svd.matrixU()<<std::endl;
        std::cout<<"Its right singular vectors are the columns of the thin V matrix:"<<std::endl<<svd.matrixV()<<std::endl;
        

        return 0;
}
         
