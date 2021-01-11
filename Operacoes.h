Lista::Lista(){
    Position->Next=NULL;
    Position->Previous=NULL;
    Position->Info=0;
}
bool Lista::TaVazia(){
    if((Position->Next==NULL && Position->Previous==NULL)||(Position==Position->Next)){
        return true;
    }else{
        return false;
    }
}
void Lista::AddDepoisPosition(int i){
    if(TaVazia()){
        Node *Aux = new Node(i,Position->Next,Position);
        Position->Next=Aux;
        Position->Previous=Aux;
        cout<<Aux->Info<<endl;
    }else{
        Node *Aux = new Node(i,Position->Next,Position);
        Position->Next=Aux;
        Aux->Next->Previous=Aux;
        cout<<Aux->Info<<endl;
    }
}
void Lista::AddAntesPosition(int i){
    if(TaVazia()){
        Node* Aux= new Node(i,Position,Position->Previous);
        Position->Next=Aux;
        Position->Previous=Aux;
        cout<<Aux->Info<<endl;
    }else{
        Node *Aux = new Node(i,Position,Position->Previous);
        Aux->Previous->Next=Aux;
        Position->Previous=Aux;
        cout<<Aux->Info<<endl;
    }
}
void Lista::DeletaDepois(){
    if(!TaVazia()){
        Node *Aux;
        Aux=Position->Next;
        Position->Next=Aux->Next;
        Aux->Next->Previous=Position;
        delete Aux;
    }
}
void Lista::DeletaAntes(){
    if(!TaVazia()){
        Node* Aux;
        Aux=Position->Previous;
        Position->Previous=Aux->Previous;
        Aux->Previous->Next=Position;
        delete Aux;
    }
}
void Lista::MovePositionProxPos(){
    Node *Aux=Position->Next;
    Aux->Previous=Position->Previous;
    Position->Previous->Next=Aux;
    Position->Previous=Aux;
    Position->Next=Aux->Next;
}
void Lista::MovePositionAntesPos(){
    Node *Aux=Position->Previous;
    Aux->Next=Position->Next;
    Position->Next->Previous=Aux;
    Position->Next=Aux;
    Position->Previous=Aux->Previous;
}
int Lista::GetValue(){
    cout<<endl;
    return Position->Info;
    cout<<endl;
}
int Lista::BuscaValor(int value){
	Node *Aux = Position->Next;
    while(Aux != Position){
        if (Aux->Info == value){
            return true;
		}
		Aux = Aux->Next;
   	}
	return false;
}

