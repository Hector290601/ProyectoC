typedef struct alumno{
	char id[5];
	char nombre[50];
	char apellidoPaterno[50];
	char apellidoMaterno[50];
	int turno;
	int semestre;
	char materias[6][5];
	int grupo;
	float calificaciones[6];
	int inasistencias;
	int anioIngreso;
	char numeroTelefono[10];
	struct alumno *sig;
}Alumno;

typedef struct profesor{
	char id[5];
	char nombre[50];
	char apellidoPaterno[50];
	char apellidoMaterno[50];
	int anioIngreso;
	int materia;
	char horario[5];
	int grupos[6];
	struct profesor *sig;
}Profesor;

typedef struct materia{
	char id[5];
	char seriaciones[10][5];
	int duracion;
	int clasesPorSemana;
	int maestros;
	int alumnos;
	int grupos;
	char horarios[6][5];
	struct materia *sig;
}Materia;

typedef struct grupo{
	char id[5];
	int materia[5];
	int numeroDeAlumnos;
	char maestro[5];
	char nombreTutor[50];
	char nombreJefeGrupo[50];
	struct grupo *sig;
}Grupo;
