#include "RunTimer.h"
using namespace std::chrono;
RunTimer::RunTimer()
{
	Last_Time_Point = steady_clock::now();
}

float RunTimer::Time_Elapsed()
{
	auto Old = Last_Time_Point;
	Last_Time_Point = steady_clock::now();
	duration<float> time_elapsed = Last_Time_Point - Old;
	return time_elapsed.count();
}
