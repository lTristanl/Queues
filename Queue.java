public class Queue{

        private Node first = null;
        private Node last = null;

    public void enqueue(int date){
        Node node = new Node(date);
        node.setLoad(date);
        node.setNext(null);
        if(first==null){
            first = node;
            last = node;	      
        }else{
            last.setNext(node);
            last = node;
        }
    }
    
    public int dequeue(){
        if(isEmpty()){
            return -1;
        }else{
            Node temp = first;
            int ourValue = first.getLoad();
            first = first.getNext();
            return ourValue;
        }
    }
    
    public void clear(){
    do{
        dequeue();
    }while(first!=null);
    }
    
    public void peek(){
        if(isEmpty())
            System.out.println("It's empty");
        else
        System.out.println(last.getLoad());
    }
    
    public boolean isEmpty(){
        return (first==null) ? true : false;
    }
    
    public String toString(){
        String brackets = "[";
        String brackets2 = "]";
        if(isEmpty()==true)
            return brackets+"NULL"+brackets2;
        else{
            Node current = first;
            while(current.getNext() !=null){
                if(current!=last)
                    brackets = brackets + current.getLoad()+",";
                else
                    brackets = brackets + current.getLoad();
            current = current.getNext();
            }
            brackets = brackets+current.getLoad()+brackets2;
        }
        return brackets;
    }
}
