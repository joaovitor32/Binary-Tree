using namespace std;
class Node{
    public:
        int Info;
        Node *Previous;
        Node *Next;
        Node(int Inf,Node *Proximo=NULL,Node *Anterior=NULL);
};
Node::Node(int Inf,Node *Proximo,Node *Anterior){
    Info=Inf;
    Next=Proximo;
    Previous=Anterior;
}
