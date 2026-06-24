#include <iostream>

class Robot{
    public:
        float x, y;
        double theta; // Direction

    Robot() = default;
    Robot(float x, float y, double theta){
        this->x = x;
        this->y = y;
        this->theta = theta;
    }

    void printRobotPose(){
        std::cout << "Robot's Pose \nx : " << x << std::endl;
        std::cout << "y: " << y << std::endl;
        std::cout << "theta: " <<theta <<std::endl;
    }

    virtual void moveBot(){
        std::cout << "Robot is moving..." << std::endl;
    }
};

class diffDrive : public Robot{
    public:
        double vR; //right wheel velocity
        double vL; //left wheel velocity
        double v; 
        double omega; //Instan... angle of rotation
        float W; //distance between left and rright wheel
        
    diffDrive(double vR, double vL, float W): Robot(x, y, theta){
        this->vR = vR;
        this->vL = vL;
        this->W = W;
        this->omega = (vR - vL)/W;
        this->v = (vR + vL)/2;
    }

    void moveBot(){
        std::cout << "Differential drive bot is moving at " << v << "m/s, " << omega << " rad/s." <<std::endl;
    }
};


int main(){

    Robot robot1(1, 2, 60);

    robot1.printRobotPose();

    diffDrive dd1(10, 4, 6);
    dd1.x = 5;
    dd1.y = -3;
    dd1.theta= 30;

    Robot *r = &dd1;
    r->printRobotPose();
    r->moveBot();
    

    /*
    dd1.printRobotPose();
    dd1.moveBot();
    */

    return 0;
}