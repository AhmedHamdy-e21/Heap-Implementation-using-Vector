cmake_minimum_required(VERSION 3.17)
project(Customized_Heap)

set(CMAKE_CXX_STANDARD 14)

add_executable(Customized_Heap main.cpp
        "Max Heap/MaxHeap.cpp"
        "Max Heap/MaxHeap.h"
        "Mission related/EmergencyMission.cpp"
        "Mission related/EmergencyMission.h"
        "Mission related/PolarMission.cpp"
        "Mission related/PolarMission.h"
        "Mission related/MountainousMission.cpp"
        "Mission related/MountainousMission.h"
        "Mission related/Mission.cpp"
        "Mission related/Mission.h"
        )