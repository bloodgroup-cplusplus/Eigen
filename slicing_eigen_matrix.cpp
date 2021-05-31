//Slicing consists in taking a set of rows, columns, or elements, uniformly spaced within a matrix. Again, the class Map allows to easily mimic this feature.

//For instance, one can skip every P elements in a vector: 

#include<iostream>
#include<eigen3/Eigen/Dense>
int main()
{
	Eigen::RowVectorXf v= Eigen::RowVectorXf::LinSpaced(20,0,19);
	std::cout<<"Input:"<<std::endl<<v<<std::endl;
	Eigen::Map<Eigen::RowVectorXf,0,Eigen::InnerStride<2>> v2(v.data(),v.size()/2);
	std::cout<<"Even:"<<v2<<std::endl;
	return 0;
}

