cmake_minimum_required(VERSION 3.17)
project(Customized_linked_list_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(Customized_linked_list_class main.cpp

        "Mission related/EmergencyMission.cpp"
        "Mission related/EmergencyMission.h"
        "Mission related/PolarMission.cpp"
        "Mission related/PolarMission.h"
        "Mission related/MountainousMission.cpp"
        "Mission related/MountainousMission.h"
        "Mission related/Mission.cpp"
        "Mission related/Mission.h"
        LinkedListMissions.cpp LinkedListMissions.h NodeMission.cpp NodeMission.h)