#include "TemplatesHTML.h"
//#include "Empleado.h"
#include "FuncionesGlobalesDeMenus.h"
#include "Paciente.h"
#include <iostream>
#include <fstream>


using namespace std;
//----------------------------------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------------------------------//
//----------------------------------------------------------------------------------------------------------------------//
///LISTADOS
//todo: terminar esta funcion..y modificar el css para cambiar lo que dice cuando se vuelve responsive...acomodar la tabla
void MostrarPacientesListadosPorApellidos(Paciente* p, int cantRegistros) {
    ofstream file;
    file.open("Listados\\ListadoPacientesOrdenadosPorApellido.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


	file << "<!DOCTYPE html>" << endl;
	file << "	<html lang=\"en\">" << endl;
	file << "	<head>" << endl;
	file << "	<title>Consultorio Medico</title>" << endl;
	file << "	<meta charset=\"UTF-8\">" << endl;
	file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
	file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
	file << "	<!--============================================================================================== = -->" << endl;
	file << "	</head>" << endl;
	file << "	<body>" << endl;
	file << "	<div class=\"limiter\">" << endl;
	file << "	<div class=\"container-table100\">" << endl;
	file << "	<div class=\"wrap-table100\">" << endl;
	file << "	<div class=\"table100\">" << endl;
	file << "	<table>" << endl;
    file << "   <h2><center>Listado de pacientes ordenados por apellido</center></h2>" << endl;
	file << "	<thead>" << endl;
	file << "	<tr class=\"table100 - head\">" << endl;
	file << "	<th class=\"column1\">Apellido</th>" << endl;
	file << "	<th class=\"column2\">Nombre</th>" << endl;
	file << "	<th class=\"column3\">DNI</th>" << endl;
	file << "	<th class=\"column4\">Edad</th>" << endl;
	file << "	<th class=\"column5\">Telefono</th>" << endl;
	file << "	<th class=\"column6\">Email</th>" << endl;
	file << "	</tr>" << endl;
	file << "	</thead>" << endl;
	file << "	<tbody>" << endl;
    for (int i = 0; i < cantRegistros; i++)
    {
        if (strcmp(p[i].getNombres(), " ") == 0) continue;
        file << "	<tr>" << endl;
        file << "	<td class=\"column1\">"<<p[i].getApellidos()<<"</td >" << endl;
        file << "	<td class=\"column2\">"<<p[i].getNombres()<<"</td>" << endl;
        file << "	<td class=\"column3\">"<<p[i].getDNI()<<"</td>" << endl;
        file << "	<td class=\"column4\">"<<p[i].getEdad()<<"</td>" << endl;
        file << "	<td class=\"column5\">"<<p[i].getTelefono()<<"</td>"<<endl;
        file << "	<td class=\"column6\">"<<p[i].getEmail()<<"</td>"<<endl;
        file << "	</tr>" << endl;
    }
	
    file << "	</tbody>"<< endl;
    file << "	</table>"<< endl;
    file << "	</div>"<< endl;
    file << "	</div>"<< endl;
    file << "	</div>"<< endl;
    file << "	</div>"<< endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>"<< endl;
        file << "	<!--============================================================================================== = -->" << endl;
        file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
        file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
        file << "	<!--============================================================================================== = -->" << endl;
        file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
        file << "	<!--============================================================================================== = -->" << endl;
        file << "	<script src=\"js/main.js\"></script>" << endl;
        file << "	</body>" << endl;
        file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\ListadoPacientesOrdenadosPorApellido.html");
}
//-------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------
void MostrarPacientesPorRangoEdad(Paciente* vPacientes, int cant) {
    ofstream file;
    file.open("Listados\\ListadoPacientesOrdenadosPorRangoEdad.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


    file << "<!DOCTYPE html>" << endl;
    file << "	<html lang=\"en\">" << endl;
    file << "	<head>" << endl;
    file << "	<title>Consultorio Medico</title>" << endl;
    file << "	<meta charset=\"UTF-8\">" << endl;
    file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	</head>" << endl;
    file << "	<body>" << endl;
    file << "	<div class=\"limiter\">" << endl;
    file << "	<div class=\"container-table100\">" << endl;
    file << "	<div class=\"wrap-table100\">" << endl;
    file << "	<div class=\"table100\">" << endl;
    file << "	<table>" << endl;
    file << "   <h2><center>Listado de pacientes ordenados por rango de edad</center></h2>" << endl;
    file << "	<thead>" << endl;
    file << "	<tr class=\"table100 - head\">" << endl;
    file << "	<th class=\"column1\">Apellido</th>" << endl;
    file << "	<th class=\"column2\">Nombre</th>" << endl;
    file << "	<th class=\"column3\">DNI</th>" << endl;
    file << "	<th class=\"column4\">Edad</th>" << endl;
    file << "	<th class=\"column5\">Telefono</th>" << endl;
    file << "	<th class=\"column6\">Email</th>" << endl;
    file << "	</tr>" << endl;
    file << "	</thead>" << endl;
    file << "	<tbody>" << endl;
    for (int i = 0; i < cant; i++)
    {
        //if () continue;
        file << "	<tr>" << endl;
        file << "	<td class=\"column1\">" << vPacientes[i].getApellidos() << "</td >" << endl;
        file << "	<td class=\"column2\">" << vPacientes[i].getNombres() << "</td>" << endl;
        file << "	<td class=\"column3\">" << vPacientes[i].getDNI() << "</td>" << endl;
        file << "	<td class=\"column4\">" << vPacientes[i].getEdad() << "</td>" << endl;
        file << "	<td class=\"column5\">" << vPacientes[i].getTelefono() << "</td>" << endl;
        file << "	<td class=\"column6\">" << vPacientes[i].getEmail() << "</td>" << endl;
        file << "	</tr>" << endl;
    }

    file << "	</tbody>" << endl;
    file << "	</table>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
    file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"js/main.js\"></script>" << endl;
    file << "	</body>" << endl;
    file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\ListadoPacientesOrdenadosPorRangoEdad.html");
}
//------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------
void MostrarPacientePorDNI(Paciente& reg) {
    ofstream file;
    file.open("Listados\\BusquedaPacientePorDNI.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


    file << "<!DOCTYPE html>" << endl;
    file << "	<html lang=\"en\">" << endl;
    file << "	<head>" << endl;
    file << "	<title>Consultorio Medico</title>" << endl;
    file << "	<meta charset=\"UTF-8\">" << endl;
    file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	</head>" << endl;
    file << "	<body>" << endl;
    file << "	<div class=\"limiter\">" << endl;
    file << "	<div class=\"container-table100\">" << endl;
    file << "	<div class=\"wrap-table100\">" << endl;
    file << "	<div class=\"table100\">" << endl;
    file << "	<table>" << endl;
    file << "   <h2><center>Busqueda de Paciente por DNI</center></h2>" << endl;
    file << "	<thead>" << endl;
    file << "	<tr class=\"table100 - head\">" << endl;
    file << "	<th class=\"column1\">Apellido</th>" << endl;
    file << "	<th class=\"column2\">Nombre</th>" << endl;
    file << "	<th class=\"column3\">DNI</th>" << endl;
    file << "	<th class=\"column4\">Edad</th>" << endl;
    file << "	<th class=\"column5\">Telefono</th>" << endl;
    file << "	<th class=\"column6\">Email</th>" << endl;
    file << "	</tr>" << endl;
    file << "	</thead>" << endl;
    file << "	<tbody>" << endl;

        //if () continue;
        file << "	<tr>" << endl;
        file << "	<td class=\"column1\">" << reg.getApellidos() << "</td >" << endl;
        file << "	<td class=\"column2\">" << reg.getNombres() << "</td>" << endl;
        file << "	<td class=\"column3\">" << reg.getDNI() << "</td>" << endl;
        file << "	<td class=\"column4\">" << reg.getEdad() << "</td>" << endl;
        file << "	<td class=\"column5\">" << reg.getTelefono() << "</td>" << endl;
        file << "	<td class=\"column6\">" << reg.getEmail() << "</td>" << endl;
        file << "	</tr>" << endl;
    file << "	</tbody>" << endl;
    file << "	</table>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
    file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"js/main.js\"></script>" << endl;
    file << "	</body>" << endl;
    file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\BusquedaPacientePorDNI.html");
}
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

int obtenerDNIPaciente(int IDPaciente) {
    Paciente reg;
    int pos = 0, dni;
    while (reg.leerDeDisco(pos)) {
        if (reg.getID() == IDPaciente) {
            dni = reg.getDNI();
            return dni;
        }
        pos++;
    }
}

void obtenerNombrePaciente(int IDPaciente, char nombre[]) {
    Paciente reg;
    int pos = 0;
    while (reg.leerDeDisco(pos)) {
        if (reg.getID() == IDPaciente) {
            //nombre=reg.getNombres();
            strcpy(nombre, reg.getNombres());
            strcat(nombre, " ");
            strcat(nombre, reg.getApellidos());
            return;
        }
        pos++;
    }
}

void MostrarTurnosNoAsistidos(Fecha& hoy) {
    ofstream file;
    Turno turno;
    file.open("Listados\\ListadoTurnosNoAsistidos.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


    file << "<!DOCTYPE html>" << endl;
    file << "	<html lang=\"en\">" << endl;
    file << "	<head>" << endl;
    file << "	<title>Consultorio Medico</title>" << endl;
    file << "	<meta charset=\"UTF-8\">" << endl;
    file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	</head>" << endl;
    file << "	<body>" << endl;
    file << "	<div class=\"limiter\">" << endl;
    file << "	<div class=\"container-table100\">" << endl;
    file << "	<div class=\"wrap-table100\">" << endl;
    file << "	<div class=\"table100\">" << endl;
    file << "	<table>" << endl;
    file << "   <h2><center>Listado de turnos no asistidos</center></h2>" << endl;
    file << "	<thead>" << endl;
    file << "	<tr class=\"table100 - head\">" << endl;
    file << "	<th class=\"column1\">ID Turno</th>" << endl;
    file << "	<th class=\"column2\">DNI</th>" << endl;
    file << "	<th class=\"column3\">Nombre Paciente</th>" << endl;
    file << "	<th class=\"column4\">Fecha del Turno</th>" << endl;
    file << "	<th class=\"column5\">Hora del Turno</th>" << endl;
    file << "	<th class=\"column6\">Legajo del medico</th>" << endl;
    file << "	</tr>" << endl;
    file << "	</thead>" << endl;
    file << "	<tbody>" << endl;

    int pos = 0;
    while (turno.leerDeDisco(pos++))
    {
        if (!turno.getAsistencia() && turno.getFechaTurno() < hoy && turno.getEstado()) {
            file << "	<tr>" << endl;
            file << "	<td class=\"column1\">" << turno.getID() << "</td >" << endl;
            file << "	<td class=\"column2\">" << obtenerDNIPaciente(turno.getIDPaciente()) << "</td>" << endl;
            char nombre[100];
            obtenerNombrePaciente(turno.getIDPaciente(), nombre);
            file << "	<td class=\"column3\">" << nombre << "</td>" << endl;
            file << "	<td class=\"column4\">" << turno.getFechaTurno().getDia() << "/" << turno.getFechaTurno().getMes() << "/"
                << turno.getFechaTurno().getAnio() << "</td>" << endl;
            if (turno.getHoraTurno().getHora() < 0) {
                file << "	<td class=\"column5\">0" << turno.getHoraTurno().getHora() << ":" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
                if (turno.getHoraTurno().getMinuto() < 10) {
                    file << "	<td class=\"column5\">0" << turno.getHoraTurno().getHora() << ":" << "0" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
                }
            }
            else if (turno.getHoraTurno().getMinuto() < 10) {
                file << "	<td class=\"column5\">" << turno.getHoraTurno().getHora() << ":"<< "0" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
            }
            else{
                file << "	<td class=\"column5\">" << turno.getHoraTurno().getHora() << ":" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
            }
            file << "	<td class=\"column6\">" << turno.getLegajoMedico() << "</td>" << endl;
            file << "	</tr>" << endl;
        }
    }
    file << "	</tbody>" << endl;
    file << "	</table>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
    file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"js/main.js\"></script>" << endl;
    file << "	</body>" << endl;
    file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\ListadoTurnosNoAsistidos.html");
}
//-------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------
void MostrarConsultaDeTurnosPorRangoFecha(Fecha& fechaInicial, Fecha& fechaFinal) {
    ofstream file;
    Turno turno;
    file.open("Listados\\ConsultaTurnosPorRangoFecha.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


    file << "<!DOCTYPE html>" << endl;
    file << "	<html lang=\"en\">" << endl;
    file << "	<head>" << endl;
    file << "	<title>Consultorio Medico</title>" << endl;
    file << "	<meta charset=\"UTF-8\">" << endl;
    file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	</head>" << endl;
    file << "	<body>" << endl;
    file << "	<div class=\"limiter\">" << endl;
    file << "	<div class=\"container-table100\">" << endl;
    file << "	<div class=\"wrap-table100\">" << endl;
    file << "	<div class=\"table100\">" << endl;
    file << "	<table>" << endl;
    file << "   <h2><center>Consulta de turnos por rango de fecha</center></h2>" << endl;
    file << "	<thead>" << endl;
    file << "	<tr class=\"table100 - head\">" << endl;
    file << "	<th class=\"column1\">ID Turno</th>" << endl;
    file << "	<th class=\"column2\">DNI</th>" << endl;
    file << "	<th class=\"column3\">Nombre Paciente</th>" << endl;
    file << "	<th class=\"column4\">Fecha del Turno</th>" << endl;
    file << "	<th class=\"column5\">Hora del Turno</th>" << endl;
    file << "	<th class=\"column6\">Legajo del medico</th>" << endl;
    file << "	</tr>" << endl;
    file << "	</thead>" << endl;
    file << "	<tbody>" << endl;
    int pos = 0;
    while (turno.leerDeDisco(pos++))
    {
        if (turno.getFechaTurno() > fechaInicial && turno.getFechaTurno() < fechaFinal && turno.getEstado()) {
            file << "	<tr>" << endl;
            file << "	<td class=\"column1\">" << turno.getID() << "</td >" << endl;
            file << "	<td class=\"column2\">" << obtenerDNIPaciente(turno.getIDPaciente()) << "</td>" << endl;
            char nombre[100];
            obtenerNombrePaciente(turno.getIDPaciente(), nombre);
            file << "	<td class=\"column3\">" << nombre << "</td>" << endl;
            file << "	<td class=\"column4\">" << turno.getFechaTurno().getDia() << "/" << turno.getFechaTurno().getMes() << "/"
                << turno.getFechaTurno().getAnio() << "</td>" << endl;
            if (turno.getHoraTurno().getHora() < 0) {
                file << "	<td class=\"column5\">0" << turno.getHoraTurno().getHora() << ":" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
                if (turno.getHoraTurno().getMinuto() < 10) {
                    file << "	<td class=\"column5\">0" << turno.getHoraTurno().getHora() << ":" << "0" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
                }
            }
            else if (turno.getHoraTurno().getMinuto() < 10) {
                file << "	<td class=\"column5\">" << turno.getHoraTurno().getHora() << ":" << "0" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
            }
            else {
                file << "	<td class=\"column5\">" << turno.getHoraTurno().getHora() << ":" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
            }
            file << "	<td class=\"column6\">" << turno.getLegajoMedico() << "</td>" << endl;
            file << "	</tr>" << endl;
        }
    }
    file << "	</tbody>" << endl;
    file << "	</table>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
    file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"js/main.js\"></script>" << endl;
    file << "	</body>" << endl;
    file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\ConsultaTurnosPorRangoFecha.html");
}

//------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------
void MostrarTurnosPorEspecialidad(int especialidad) {
    ofstream file;
    Turno turno;
    file.open("Listados\\ConsultaTurnosPorEspecialidad.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


    file << "<!DOCTYPE html>" << endl;
    file << "	<html lang=\"en\">" << endl;
    file << "	<head>" << endl;
    file << "	<title>Consultorio Medico</title>" << endl;
    file << "	<meta charset=\"UTF-8\">" << endl;
    file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	</head>" << endl;
    file << "	<body>" << endl;
    file << "	<div class=\"limiter\">" << endl;
    file << "	<div class=\"container-table100\">" << endl;
    file << "	<div class=\"wrap-table100\">" << endl;
    file << "	<div class=\"table100\">" << endl;
    file << "	<table>" << endl;
    file << "   <h2><center>Consulta de turnos por especialidad</center></h2>" << endl;
    file << "	<thead>" << endl;
    file << "	<tr class=\"table100 - head\">" << endl;
    file << "	<th class=\"column4\">Especialidad</th>" << endl;
    file << "	<th class=\"column1\">ID Turno</th>" << endl;
    file << "	<th class=\"column2\">DNI</th>" << endl;
    file << "	<th class=\"column3\">Nombre Paciente</th>" << endl;
    file << "	<th class=\"column4\">Fecha del Turno</th>" << endl;
    file << "	<th class=\"column5\">Hora del Turno</th>" << endl;
    file << "	<th class=\"column6\">Legajo del medico</th>" << endl;
    file << "	</tr>" << endl;
    file << "	</thead>" << endl;
    file << "	<tbody>" << endl;
    int pos = 0;
    //Especialidad e;
    Cadena especialidades[10] = { "Pediatria","Kinesiologia","Oftalmologia","Traumatologia","Obstetricia",
        "Psicologia","Nutricion","Psiquiatria","Dermatologia","Cardiologia" };
    while (turno.leerDeDisco(pos++))
    {
        if (obtenerEspecialidad(turno.getLegajoMedico()) == especialidad && turno.getEstado()) {
            file << "	<tr>" << endl;
            file << "	<td class=\"column4\">" << especialidades[especialidad-2].getCadena() << "</td >" << endl;
            file << "	<td class=\"column1\">" << turno.getID() << "</td >" << endl;
            file << "	<td class=\"column2\">" << obtenerDNIPaciente(turno.getIDPaciente()) << "</td>" << endl;
            char nombre[100];
            obtenerNombrePaciente(turno.getIDPaciente(), nombre);
            file << "	<td class=\"column3\">" << nombre << "</td>" << endl;
            file << "	<td class=\"column4\">" << turno.getFechaTurno().getDia() << "/" << turno.getFechaTurno().getMes() << "/"
                << turno.getFechaTurno().getAnio() << "</td>" << endl;
            if (turno.getHoraTurno().getHora() < 0) {
                file << "	<td class=\"column5\">0" << turno.getHoraTurno().getHora() << ":" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
                if (turno.getHoraTurno().getMinuto() < 10) {
                    file << "	<td class=\"column5\">0" << turno.getHoraTurno().getHora() << ":" << "0" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
                }
            }
            else if (turno.getHoraTurno().getMinuto() < 10) {
                file << "	<td class=\"column5\">" << turno.getHoraTurno().getHora() << ":" << "0" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
            }
            else {
                file << "	<td class=\"column5\">" << turno.getHoraTurno().getHora() << ":" << turno.getHoraTurno().getMinuto() << "</td>" << endl;
            }
            file << "	<td class=\"column6\">" << turno.getLegajoMedico() << "</td>" << endl;
            file << "	</tr>" << endl;
        }
    }
    file << "	</tbody>" << endl;
    file << "	</table>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
    file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"js/main.js\"></script>" << endl;
    file << "	</body>" << endl;
    file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\ConsultaTurnosPorEspecialidad.html");
}

//---------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------
void MostrarConsultaPagosPorRangoFecha(Fecha& fecha1, Fecha& fecha2) {
    ofstream file;
    FacturaConsulta facturaConsulta;
    file.open("Listados\\ConsultaPagosPorRangoFecha.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


    file << "<!DOCTYPE html>" << endl;
    file << "	<html lang=\"en\">" << endl;
    file << "	<head>" << endl;
    file << "	<title>Consultorio Medico</title>" << endl;
    file << "	<meta charset=\"UTF-8\">" << endl;
    file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	</head>" << endl;
    file << "	<body>" << endl;
    file << "	<div class=\"limiter\">" << endl;
    file << "	<div class=\"container-table100\">" << endl;
    file << "	<div class=\"wrap-table100\">" << endl;
    file << "	<div class=\"table100\">" << endl;
    file << "	<table>" << endl;
    file << "   <h2><center>Consulta de pagos por rango de fecha</center></h2>" << endl;
    file << "	<thead>" << endl;
    file << "	<tr class=\"table100 - head\">" << endl;
    file << "	<th class=\"column4\">ID</th>" << endl;
    file << "	<th class=\"column4\">Precio Consulta</th>" << endl;
    file << "	<th class=\"column4\">Obra Social</th>" << endl;
    file << "	<th class=\"column4\">Fecha del Turno</th>" << endl;
    file << "	<th class=\"column4\">Legajo Administrativo</th>" << endl;
    file << "	<th class=\"column3\">Forma de Pago</th>" << endl;
    file << "	<th class=\"column3\">Legajo del Medico</th>" << endl;
    file << "	</tr>" << endl;
    file << "	</thead>" << endl;
    file << "	<tbody>" << endl;
    int pos = 0;

    while (facturaConsulta.leerDeDisco(pos++))
    {
        if (facturaConsulta.getFechaFactura() > fecha1 && facturaConsulta.getFechaFactura() < fecha2) {
            file << "	<tr>" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getID() << "</td >" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getPrecioConsulta() << "</td >" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getObraSocial() << "</td>" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getFechaTurno().getDia() << "/" << facturaConsulta.getFechaTurno().getMes() << "/"
                << facturaConsulta.getFechaTurno().getAnio() << "</td>" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getLegajoAdministrativo() << "</td>" << endl;
            switch (facturaConsulta.getFormaPago()) {
            case 1:
                file << "	<td class=\"column3\">Efectivo</td>" << endl;
                break;
            case 2:
                file << "	<td class=\"column3\">Tarjeta Debito</td>" << endl;
                break;
            case 3:
                file << "	<td class=\"column3\">Tarjeta Credito</td>" << endl;
                break;
            }
            file << "	<td class=\"column3\">" << facturaConsulta.getLegajoMedico() << "</td>" << endl;
            file << "	</tr>" << endl;
        }
    }
    file << "	</tbody>" << endl;
    file << "	</table>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
    file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"js/main.js\"></script>" << endl;
    file << "	</body>" << endl;
    file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\ConsultaPagosPorRangoFecha.html");
}
//--------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------
void MostrarPagosPorCliente(int DniPaciente) {
    ofstream file;
    FacturaConsulta facturaConsulta;
    //todo:validar que existan registros
    //todo: no se ve legajo medico y obra social
    file.open("Listados\\ConsultaPagosPorCliente.html");
    if (!file.is_open()) {
        cout << "ERROR DE ARCHIVO" << endl;
        return;
    }


    file << "<!DOCTYPE html>" << endl;
    file << "	<html lang=\"en\">" << endl;
    file << "	<head>" << endl;
    file << "	<title>Consultorio Medico</title>" << endl;
    file << "	<meta charset=\"UTF-8\">" << endl;
    file << "	<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"icon\" type=\"image/png\" href=\"images/icons/favicon.ico\"/>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/bootstrap/css/bootstrap.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"fonts/font-awesome-4.7.0/css/font-awesome.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/animate/animate.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/select2/select2.min.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href=\"vendor/perfect-scrollbar/perfect-scrollbar.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/util.css\">" << endl;
    file << "	<link rel=\"stylesheet\" type=\"text/css\" href =\"css/main.css\">" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	</head>" << endl;
    file << "	<body>" << endl;
    file << "	<div class=\"limiter\">" << endl;
    file << "	<div class=\"container-table100\">" << endl;
    file << "	<div class=\"wrap-table100\">" << endl;
    file << "	<div class=\"table100\">" << endl;
    file << "	<table>" << endl;
    file << "   <h2><center>Consulta de pagos por cliente</center></h2>" << endl;
    file << "	<thead>" << endl;
    file << "	<tr class=\"table100 - head\">" << endl;
    file << "	<th class=\"column4\">ID</th>" << endl;
    file << "	<th class=\"column4\">Precio Consulta</th>" << endl;
    file << "	<th class=\"column4\">Obra Social</th>" << endl;
    file << "	<th class=\"column4\">Fecha del Turno</th>" << endl;
    file << "	<th class=\"column4\">Legajo Administrativo</th>" << endl;
    file << "	<th class=\"column3\">Forma de Pago</th>" << endl;
    file << "	<th class=\"column3\">Legajo del Medico</th>" << endl;
    file << "	</tr>" << endl;
    file << "	</thead>" << endl;
    file << "	<tbody>" << endl;
    int pos = 0;
    int id = obtenerID(DniPaciente);
    //if (Cont == 0)
    //{
    //    cout << "NO EXISTE UN PAGO CON ESE NUMERO DE DNI, INTENTE CON OTRO NUMERO" << endl << endl;
    //}

    while (facturaConsulta.leerDeDisco(pos++))
    {
        if (facturaConsulta.getIDPaciente() == id) {
            file << "	<tr>" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getID() << "</td >" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getPrecioConsulta() << "</td >" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getObraSocial() << "</td>" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getFechaTurno().getDia() << "/" << facturaConsulta.getFechaTurno().getMes() << "/"
                << facturaConsulta.getFechaTurno().getAnio() << "</td>" << endl;
            file << "	<td class=\"column4\">" << facturaConsulta.getLegajoAdministrativo() << "</td>" << endl;
            switch (facturaConsulta.getFormaPago()) {
            case 1:
                file << "	<td class=\"column3\">Efectivo</td>" << endl;
                break;
            case 2:
                file << "	<td class=\"column3\">Tarjeta Debito</td>" << endl;
                break;
            case 3:
                file << "	<td class=\"column3\">Tarjeta Credito</td>" << endl;
                break;
            }
            file << "	<td class=\"column3\">" << facturaConsulta.getLegajoMedico() << "</td>" << endl;
            file << "	</tr>" << endl;
        }
    }
    file << "	</tbody>" << endl;
    file << "	</table>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	</div>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/jquery/jquery-3.2.1.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/bootstrap/js/popper.js\"></script>" << endl;
    file << "	<script src=\"vendor/bootstrap/js/bootstrap.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"vendor/select2/select2.min.js\"></script>" << endl;
    file << "	<!--============================================================================================== = -->" << endl;
    file << "	<script src=\"js/main.js\"></script>" << endl;
    file << "	</body>" << endl;
    file << "	</html>" << endl;


    file.flush();
    file.close();
    system("Listados\\ConsultaPagosPorCliente.html");
}
