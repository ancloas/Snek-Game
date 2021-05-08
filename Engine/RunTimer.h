#pragma once
#include<chrono>

class RunTimer
{
public:
	RunTimer();
	float Time_Elapsed();
private:
	std::chrono::steady_clock::time_point Last_Time_Point;
};