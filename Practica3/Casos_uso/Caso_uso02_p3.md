**Modificar alumno**

**ID:** 002

**Breve descripción:** El sistema modifica los datos de un alumno.


**Actores principales:** Usuario.

**Actores secundarios:** Alumno.

**Precondiciones:**

  1. El alumno debe existir en el sistema.

**Flujo principal:**

  1. El caso de uso empieza cuando el sistema necesita modificar los datos de un alumno.
  2. El sistema ejecuta la función buscar alumno, para localizar al alumno que se desea modificar los datos.
  3. El sistema recoge los datos del alumno.

**Postcondiciones:**

  * El sistema permite al usuario modificar los datos del alumno.

**Flujos alternativos:**

  2.a. Si no existe el alumno, el sistema muestra un mensaje de error y finaliza la función.
