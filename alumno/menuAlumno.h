void menuAlumno(void){
	Alumno *headAlumno = NULL;
	int opc;
	do{
		printf("Selecciona una opción:\n");
		printf("1)Modificar datos\n");
		printf("2)Modificar materias\n");
		printf("3)Salir\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
					modificarDatos();
				break;
				case 2:
					modificarMaterias();
				break;
			}
		}else{
			setbuf(stdin, NULL);
		}
	}while(opc != 3);
}
