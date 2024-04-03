abstract class Vehicle {
    private String name;
    
    public String getName(String val) {
        return "Vehicle name: " + val;
    }
    
    public String getName() {
        return "Vehicle name: " + name;
    }
    
    public void setName(String val) {
        name = val;
    }
}

class Car extends Vehicle {
    public Car(String val) {
        setName(val);
    }

    @Override
    public String getName() {
        return "Car name: " + super.getName();
    }
}

public class good {
    public static void main(String[] args) {
        Vehicle obj = new Car("Spark");
        System.out.print(obj.getName());
    }
}
