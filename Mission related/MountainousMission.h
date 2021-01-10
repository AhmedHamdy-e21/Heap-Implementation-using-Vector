//
// Created by raspberry on 2020-11-30.
//

#ifndef MARS_MISSIONS_MANAGEMENT_MOUNTAINOUSMISSION_H
#define MARS_MISSIONS_MANAGEMENT_MOUNTAINOUSMISSION_H
#include "Mission.h"

class MountainousMission : public Mission


        {

private:
            int AutoP;

public:
       MountainousMission(int AutoP, int ED, int ID, int TargetLocation, int MissionDuration, int Significance):
       Mission(ED,ID, TargetLocation, MissionDuration,Significance)
       {
           setAutoP(AutoP);

       }
       void setAutoP(int AutoP)
       {
           this->AutoP=AutoP;
       }
        void PrintMission() const override  //Make sure in gitkraken
        {
            cout<<"It's Mountainous mission right here with Target location "<< this->getTargetLocation();
        }

        };


#endif //MARS_MISSIONS_MANAGEMENT_MOUNTAINOUSMISSION_H
