#pragma once

class Stats
{
	double Sum, SumSquared, Count;
public:
	virtual ~Stats() {};
	Stats():Sum(0.0), SumSquared(0.0), Count(0){}
	void add(double x);
	double mean();
	double stdev();
	double count();
};