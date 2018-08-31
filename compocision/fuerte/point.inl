template <class T>
point<T>::point(T _x, T _y){
	x=_x;
	y=_y;
}
template <class T>
point<T>::~point(){

}
template <class T>
void point<T>::set_x(T _x){
	x=_x;
}
template <class T>
void point<T>::set_y(T _y){
	y=_y;
}
template <class T>
T point<T>::get_x(){
	return x;
}
template <class T>
T point<T>::get_y(){
	return y;
}