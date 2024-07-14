cmake_minimum_required(VERSION 3.28)
project(Algo)

set(CMAKE_CXX_STANDARD 17)

add_executable(SelfAlgo leetcode/dp/2786_Visit_Array_Positions_to_Maximize_Score.cpp
        leetcode/dp/42_Trapping_Rain_Water.cpp
        leetcode/dp/804_Max_Increase_to_Keep_City_Skyline.cpp
        #        test.cpp
)
