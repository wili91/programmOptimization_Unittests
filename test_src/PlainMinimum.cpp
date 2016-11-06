/*
 * PlainMinimum.cpp
 *
 *  Created on: Nov 5, 2016
 *      Author: lisa
 */

#include "gtest/gtest.h"
#include "excerciseAandB.h"


class PlainMinimumTest : public ::testing::Test{

};

//Plain Minimum Tests
TEST(PlainMinimumTest, plain_minimum_int)
{
	std::array<int, 6> arr ={9,7,6,6,7,1};
	EXPECT_EQ(1, plain_minimum(arr, 6));

	std::array<int, 6> arr1 ={1,9,7,0,6,7};
	EXPECT_EQ(0, plain_minimum(arr1, arr1.size()));
}

TEST(PlainMinimumTest, plain_minimum_double){
	std::array<double, 10> arr2 ={0.4,0.9,0.09,6.09,5.9,1.25,0.39,0.9,6.09,0.09};
	EXPECT_EQ(0.09, plain_minimum(arr2, 10));

	std::array<double, 20> arr3 ={0.4,0.9,0.09,6.09,5.9,1.25,0.39,0.9,6.09,0.09,
								-0.4,0.9,0.09,6.09,-5.9,1.25,0.39,0.9,6.09,0.09};
	EXPECT_EQ(-5.9, plain_minimum(arr3, arr3.size()));
}

TEST(PlainMinimumTest, plain_minimum_string){
	std::array<std::string, 3> arr ={"Hallo ", "Welt ", "!"};
	EXPECT_EQ("!", plain_minimum(arr, arr.size()));

	std::array<std::string, 7> arr3 ={"Äpfel ", "und ", " Birnen ", "und", " Bananen ", "sind ", "gesund."};
	EXPECT_EQ(" Bananen ", plain_minimum(arr3, arr3.size()));
}
