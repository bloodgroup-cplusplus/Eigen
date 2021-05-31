// For more about z_value_normalization read the article here https://www.codecademy.com/articles/normalization
//I learnt about this idea from https://github.com/coding-ai/machine_learning_cpp/blob/master/ETL/ETL.cpp
// do check out her github for more.. also do check out the youtube channel
#include<iostream>
#include<eigen3/Eigen/Dense>
auto mean(Eigen::MatrixXd data)-> decltype(data.colwise().mean())
{
	return data.colwise().mean();
}
auto standard_deviation(Eigen::MatrixXd data) -> decltype(((data.array().square().colwise().sum())/(data.rows()-1)).sqrt())
{
	return ((data.array().square().colwise().sum())/(data.rows()-1)).sqrt();
}

							  
int main()
{
	Eigen::MatrixXd m=Eigen::MatrixXd::Random(12,12);
	auto mean= mean(m);
	
	
	
		return 0;
}


