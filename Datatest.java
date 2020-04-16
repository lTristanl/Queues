public class Datatest{
    public static void main(String []args) {
        Queue queue = new Queue();
        queue.enqueue(2);
        queue.enqueue(15);
        queue.enqueue(6);
        queue.enqueue(18);
        queue.enqueue(4);
        queue.enqueue(3);
        queue.enqueue(1);
        queue.peek();
        queue.dequeue();
        System.out.println(queue.toString());
        System.out.println(queue.isEmpty());
    }
}