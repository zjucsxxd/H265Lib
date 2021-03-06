/**
 * @file	PartitioningStrategy.cpp
 *
 * @brief	Początkowe wskaźniki na singletony strategii
 */

#include "PartitioningStrategy.h"

DefaultBigPartitions* DefaultBigPartitions::instance = nullptr;
DefaultSmallPartitions* DefaultSmallPartitions::instance = nullptr;
OptimalPartitioning* OptimalPartitioning::instance = nullptr;