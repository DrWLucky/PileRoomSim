#ifndef SteppingAction_h
#define SteppingAction_h 1

#include "G4UserSteppingAction.hh"
#include "globals.hh"
#include <vector>

class SteppingActionMessenger;
class EventAction;
class DetectorConstruction;

class SteppingAction : public G4UserSteppingAction
{
  public:
    G4double sum;
    SteppingAction(const DetectorConstruction* detectorConstruction, EventAction*);
   ~SteppingAction();

    virtual void UserSteppingAction(const G4Step*);

  private:

    const DetectorConstruction* fDetConstruction;
    SteppingActionMessenger*     fSteppingActionMessenger;

    EventAction* fEventAction;
};

#endif