#include "TestBench.h"

#include <stdio.h>
#include <iostream>

int main() 
{
    // Simulate controlled burning mode
    TestBench* testBench = new TestBench();
    testBench->RunSufficientReservoirForHazards();

    delete testBench;

    return 0;
}