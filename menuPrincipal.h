void menuPrincipal(void){
	Profesor *headProfesor = NULL;
	Alumno *headAlumno = NULL;
	Grupo *headGrupo = NULL;
	Grupo *tailGrupo = NULL;
	int opc, i = 0, j = 0;
	do{
		printf("Seleccione una opcion\n");
		printf("1)Profesor\n");
		printf("2)Alumno\n");
		printf("3)Salir\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
					menuProfesor(&headProfesor, &headGrupo, &tailGrupo, &headAlumno);
				break;
				case 2:
					menuAlumno(&headAlumno, &headGrupo);
				break;
			}
		}else{
			setbuf(stdin, NULL);
		}
	}while(opc != 3);

}
