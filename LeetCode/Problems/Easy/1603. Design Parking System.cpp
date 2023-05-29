https://leetcode.com/problems/design-parking-system/description/




class ParkingSystem {
public:
    int big;
    int medium;
    int small;
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && big){
            --big;
            return 1;
        }
        else if(carType == 2 && medium){
            --medium;
            return 1;
        }
        else if(carType == 3 && small){
            --small;
            return 1;
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */