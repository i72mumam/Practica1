**Dar de alta a un profesor**

**ID:** 012

**Breve descripción:** El usuario puede dar de alta a un profesor.

**Actores principales:** Usuario

**Actores secundarios:** Profesor

**Precondiciones:**

1. El usuario debe ser coordinador.

**Flujo principal**

1. El caso de uso empieza cuando el sistema necesita introducir a un nuevo profesor
2. El sistema recoge los datos del profesor.
3. El sistema pregunta si el profesor es coordinador o ayudante.

**Postcondiciones**

1. El sistema guarda en la base de datos, los datos sobre el profesor.
2. El sistema da permisos a ese profesor dependiendo si es coordinador o ayudante.

**Flujos alternativos**

2.a. Si no se inserta alguno de los datos, el sistema dará error y finaliza la función.
2.b. Si el profesor introducido es ayudante, no podrá tener acceso a algunas funciones del programa.
