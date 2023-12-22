package me.terato;

public class Operation {

    private float sum;
    private String user;

    public float getSum() {
        return sum;
    }

    public void setSum(float sum) {
        this.sum = sum;
    }

    public String getUser() {
        return user;
    }

    public void setUser(String user) {
        this.user = user;
    }

    @Override
    public String toString() {
        return "Operation{" +
                "sum=" + sum +
                ", user='" + user + '\'' +
                '}';
    }
}
