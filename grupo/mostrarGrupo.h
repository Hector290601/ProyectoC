void mostrarGrupo(Grupo *h, int id){
	while(h -> id != id){
		h = h->sig;
		if(h -> id = id){
			break;
		}
	}
	printf("ID\n", h -> id);
}