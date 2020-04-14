void inicioAlumno(void){
	int opc, des = 0;
	do{
		printf("Seleccione una opcion\n");
		printf("1)Nuevo alumno\n");
		printf("2)Alumno existente\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
				break;
				case 2:
					menuAlumno();
				break;
			}
			des = 1;
		}else{
			setbuf(stdin, NULL);
		}
	}while(des != 1);
}
