#ifndef _RESERVOIR_H
#define _RESERVOIR_H

class Reservoir
{
    public:

        // Constructs an empty reservoir
        Reservoir();

        // Destructs the reservoir
        ~Reservoir();

        // Returns the water level
        int CheckWaterLevel();

        // Returns the gas level
        int CheckGasLevel();

        // Tops up the water level of the reservoir by numWater
        void WaterTopUp(int level);

        // Tops up the gas level of the reservoir by numGas
        void GasTopUp(int level);

        // Give out numBombs amount of water bombs
        void ProvideWater(int level);

        // Give out numBombs amount of flame bombs
        void ProvideGas(int level);

    private:

        // Water level indicating the number of water bombs in the reservoir
        int waterLevel;

        // Gas level indicating the number of flame bombs in the reservoir
        int gasLevel;

};

#endif