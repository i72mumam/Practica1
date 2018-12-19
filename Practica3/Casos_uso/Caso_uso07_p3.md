**Insertar alumnos**


**ID:** 007


**Breve descripción:** El usuario puede insertar alumnos.


**Actores principales:** Usuario


**Actores secundarios:** Alumnos


**Precondiciones:**

1. Para insertar al alumno necesitas mínimo los datos de nombre, apellido y DNI.

**Flujo principal**

1. El caso de uso empieza cuando el usuario intenta insertar un alumno.
2. El sistema recoge los datos del alumno.

**Postcondiciones**

1. El sistema guarda en la base de datos, los datos sobre el alumno.

**Flujos alternativos**

2.a. Si no se inserta alguno de los datos, el sistema dará error y finaliza la función.
2.b. Si se inserta el alumno como líder de algín grupo en el que ya hay un líder, el sistema mostrará un mensaje indicando que ya existe un líder, y se añadirá a dicho grupo sin ser líder.
