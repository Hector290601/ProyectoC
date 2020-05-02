void calificaciones(Alumno *h, int id){
	while(h -> id != id && h != NULL){
		if(((h -> id)) == id){
			printf("Calificación:\n%g\n", h->calificaciones);
		}
		if(h != NULL){
			h = h-> sig;
		}else{
			break;
		}
	}
}
