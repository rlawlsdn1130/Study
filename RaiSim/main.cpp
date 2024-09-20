#include "ROTEM/Interface.h"
#include "ROTEM/COMMON/GlobalVariables.h"
#include "ROTEM/COMMON/RotemController.h" 

int main(int argc, char* argv[]){
  RotemMCU::init();
  RotemSimul::LoadCongfig(argc, argv);  
  RotemSimul::LoadSimulation();

  RotemSimul::server.launchServer();
  RotemSimul::SimulRobot->setComputeInverseDynamics(true);
  RotemSimul::SimulRobot->printOutMovableJointNamesInOrder();
  RotemSimul::world.setMaterialPairProp("rubber", "terrain", 1.0, 1.0, 0.1, 0.1, 0.1);  
  RotemSimul::LoadSDL();
  RotemSimul::LoadThreads();
  
  if(RotemSimul::ROS_Flag==true){
   RotemSimul::LoadROS(argc, argv); 
  }

  signal(SIGINT, RotemSimul::signal_callback_handler);
  
  while (RotemSimul::isMainLoopON){  
    RS_TIMED_LOOP(int(RotemSimul::world.getTimeStep() * 1e6)) // 1000us=1ms
    RotemSimul::server.lockVisualizationServerMutex();
    
    RotemMCU::run();
    RotemSimul::DataSave();
    RotemSimul::CalPower();
  
    RotemSimul::server.applyInteractionForce();
    RotemSimul::world.integrate();
    rotem::WorldCreator::update(RotemSimul::world, RotemSimul::Raisim_map);
    RotemSimul::server.unlockVisualizationServerMutex();
  
  if(RotemSimul::ROS_Flag==true){
    RotemSimul::ROSMsgPublish();
    ros::spinOnce();
   }
   
  RotemSimul::init_Flag=true;
 }
  RotemSimul::UnloadThreads();
  RotemSimul::FileSave();
  RotemSimul::server.killServer();
  RotemSimul::Deallocate();
  RotemMCU::clear();
  return 0;
}
