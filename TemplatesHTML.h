#pragma once
#include "Paciente.h"
#include "Direccion.h"
//#include "Empleado.h"
#include "FacturaConsulta.h"
#include "Fecha.h"
#include "HistoriaClinica.h"
#include "Hora.h"
#include "Paciente.h"
#include "Persona.h"
#include "Turno.h"
//#include "FuncionesGlobales.h"
//#include "FuncionesGlobalesDeMenus.h"
//#include "TemplatesHTML.h"
#include "Fecha_Hora.h"
#include "HorarioEmpleado.h"
#include "Archivo.h"
#include <cstdlib>
#include <vector>
#include <string>

//void prueba();
///LISTADOS
void MostrarPacientesListadosPorApellidos(Paciente* p, int cantRegistros);
void MostrarPacientesPorRangoEdad(Paciente* vPacientes, int cant);
void MostrarPacientePorDNI(Paciente& reg);
void MostrarTurnosNoAsistidos(Fecha& hoy);
void MostrarConsultaDeTurnosPorRangoFecha(Fecha& fechaInicial, Fecha& fechaFinal);
void MostrarTurnosPorEspecialidad(int especialidad);
void MostrarConsultaPagosPorRangoFecha(Fecha& fecha1, Fecha& fecha2);
void MostrarPagosPorCliente(int DniPaciente);

int obtenerDNIPaciente(int IDPaciente);
void obtenerNombrePaciente(int IDPaciente, char nombre[]);