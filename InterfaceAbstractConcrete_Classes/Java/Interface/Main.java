package Interface;

public class Main {
    public static void main(String[] args) {
        Student estudiante = new Student(1, "Pepe", "Lui");

        System.out.println(estudiante.getIdentifier());
        System.out.print(estudiante.getName() + " ");
        System.out.println(estudiante.getSurname());
        estudiante.eat();
        estudiante.toLive();
    }
}