template <class T>
robot<T>::robot(){
	p.set_x(0);
	p.set_y(0);
}
template <class T>
robot<T>::~robot(){

}
template <class T>
void robot<T>::moveto(T _x,T _y){
	p.set_x(_x);
	p.set_y(_y);
}
template <class T>
void robot<T>::printpos(){
	cout<<"X: "<<p.get_x()<<" Y: "<<p.get_y()<<endl;
}