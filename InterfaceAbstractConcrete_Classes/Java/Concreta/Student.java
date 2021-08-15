package Concreta;

public class Student extends Human {
    private int _identifier;
    private String _name;
    private String _surname;

    public Student(int id, String name, String surname) {
        this._identifier = id;
        this._name = name;
        this._surname = surname;
    }

    public void setIdentifier(int id) {
        this._identifier = id;
    }

    public void setName(String name) {
        this._name = name;
    }

    public void setSurname(String surname) {
        this._surname = surname;
    }

    public int getIdentifier() {
        return this._identifier;
    }

    public String getName() {
        return this._name;
    }

    public String getSurname() {
        return this._surname;
    }
}
