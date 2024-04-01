#pragma once

#include "Astro/time_converter.hpp"
#include "Astro/frame_converter.hpp"
#include "Astro/planet_ephemeris.hpp"

namespace propagator{
    class AstroEnvSetup{
        public:
        static AstroEnvSetup& getInstance();


        AstroEnvSetup(const AstroEnvSetup&) = delete;
        AstroEnvSetup& operator=(const AstroEnvSetup&) = delete;

        TimeConverter& AstroTime();
        FrameConverter& EarthRotation();
        PlanetEphemeris&  NbodyEphemeris();


    private:
        AstroEnvSetup();
        ~AstroEnvSetup() {}

        TimeConverter astro_time_;
        FrameConverter iers_;
        PlanetEphemeris de4xx_;


    };

}
//Singleton implemention
//https://hwan-shell.tistory.com/227
