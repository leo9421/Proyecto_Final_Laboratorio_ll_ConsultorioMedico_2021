#include <iostream>
#include "Direccion.h"
#include "Empleado.h"
#include "FacturaConsulta.h"
#include "Fecha.h"
#include "HistoriaClinica.h"
#include "Hora.h"
#include "Paciente.h"
#include "Persona.h"
#include "Turno.h"
#include "FuncionesGlobales.h"
#include "FuncionesGlobalesDeMenus.h"
#include "TemplatesHTML.h"
#include "Fecha_Hora.h"
#include "HorarioEmpleado.h"
#include "Archivo.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    //ConsultaDePacientes();
    //ConsultaDeTurnos();
    //ConsultaDePagos();
    //ESTA ES UNA PRUEBA DE MODIFICACION EN GITHUB
    //RestaurarCopiaSeguridadPacientes();
    //ListadoDePacientesPorApellido();
    /*Archivo reg;
    int pos = 0;
    while (reg.leerDeDisco(pos++, "Backup/Pacientes/rutas.dat"))
    {
        reg.Mostrar();
    }*/
    /*Archivo reg;
    int pos = 0;
    while (reg.leerDeDisco(pos++,"Backup/Pacientes/rutas.dat")) {
        reg.Mostrar();
    }*/
    //AgregarUnUsuario();
    //CopiaSeguridadPacientes();
    //CopiaSeguridadEmpleados();
    //ExportarEmpleados();
    //char c[2] = { 92 };
    //cout << c;
    //AgregarPaciente();
    //prueba();
    //Fecha f(14,1,2022);
    //f.Mostrar();
    //cout << f.getFeriado();
    //cout<<f.getNumeroDia();
    //Hora v[20];
    //cargarHorarios(v);
    //Fecha_Hora reg;
    //reg.Mostrar();
    //AsignarTurno();
    //ModificarTurno();
    //EliminarTurno();
    login();
    /*Turno t;
    Fecha f(7, 12, 2021);
    Hora h(17, 30);
    t.setFechaTurno(f);
    t.setHoraTurno(h);
    t.setLegajoMedico(3);
    t.grabarEnDisco();*/
    //Hora h1(8, 0), h2(18, 0);
    //HorarioEmpleado horaLaboral;
    //horaLaboral.setHoraEntrada(h1);
    /*for (int i = 3; i < 10; i++)
    {
        Empleado reg;
        Especialidad e;
        reg.setDNI(123456);
        reg.setNombres("Ana");
        reg.setApellidos("Gutierrez");
        reg.setLegajo(3333);
        char pass[30];
        strcpy(pass, "AnaMartinez");
        reg.setPassword(pass);
        reg.setEmail("leandro.gomez3@alumnos.frgp.utn.edu.ar");
        reg.setTipoEmpleado(2);
        e.setNEspecialidades(i);
        reg.setEspecialidad(e);
        reg.grabarEnDisco();
    }*/

    //reg.setEspecialidad(0);

    /*Empleado obj;
    obj.setDNI(123456);
    obj.setNombres("Tobias");
    obj.setApellidos("Iaconis");
    obj.setLegajo(1111);
    strcpy(pass, "12345678");
    obj.setPassword(pass);
    obj.setEmail("tobias.iaconis@alumnos.frgp.utn.edu.ar");
    obj.setTipoEmpleado(99);*/
    //Empleado reg(horaEntrada, horaSalida, 123456, "Tobias", "Iaconis", 321, "321", "tobias.iaconis@alumnos.frgp.utn.edu.ar", 1, 0, true);
    //reg.grabarEnDisco(0);
    //obj.grabarEnDisco(0);
    //cout << endl;
    /*Turno t;
    int pos = 0;

    while (t.leerDeDisco(pos++)) {
        //if (t.getEstado()) {
            t.Mostrar();
            //cout << t.getEstado() << endl;
            cout << endl; 
        //}
    }*/
    /*FILE* p;
    p = fopen("Turnos.dat", "rb");
    fseek(p, 0, 2);
    cout << ftell(p) / sizeof(Turno);
    fclose(p);*/
    //t.setFechaAsignacionTurno();
    //t.getFechaAsignacionTurno().Mostrar();*/
    //prueba();
}