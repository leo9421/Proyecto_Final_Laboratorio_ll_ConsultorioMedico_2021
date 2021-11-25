#pragma once
//#include "FuncionesGlobalesDeMenus.h"
#include "Direccion.h"
#include "Empleado.h"
#include "FacturaConsulta.h"
#include "Fecha.h"
#include "Fecha_Hora.h"
#include "HistoriaClinica.h"
#include "Hora.h"
#include "Paciente.h"
#include "Persona.h"
#include "Turno.h"
#include "Cadena.h"
#include <iostream>
#include <vector>
#include <cstring>
#include <ctime> 
#include <fstream>

void AsignarTurno();
bool esBisiesto(int anio);
int dias_mes(int mes, int anio);
void cargarHorarios(Hora* vHorarios);
void cargarFechaHoy(Fecha& fechaHoy);
void cargarFechaMax(Fecha& fechaMax, Fecha& fechaHoy, Fecha* vFechas);
bool estaEnRangoFecha(int dia, int mes, int anio, Fecha* vFechas);
bool buscarLegajoMedico(int legajoMedico, Turno& t);
bool existeEspecialidad(int especialidad, Turno& t);
bool noSeRepiteIDTurno(int nro);
int generarIDTurno();
bool empleadoOcupado(Turno& b);
void MostrarTurnosPorMedico(Fecha f, Turno* vTurnosDia, int tam, Turno* vTurnosOk);
bool nextDia(Fecha& f, Fecha* vFechas);
int nroDiaEnRango(Fecha* vFechas, Fecha& f, Fecha& aux);
bool opcionValida(int opcion);
void turnosDisponiblesPorMedico(int legajoMedico, Fecha& f, Hora* vHorarios, Turno& t, Fecha* vFechas);
int obtenerID(int dni);
void AgregarPaciente(int dni=0);
int generarIDPaciente();
bool noSeRepiteIDPaciente(int nro);
bool noExistePaciente(int dni);
void ModificarTurno();
void EliminarTurno();
void eliminarTurnoPaciente(Turno& t);
void modificarTurnoDNI(Turno& t);
void modificarFechaTurno(Turno& t);
bool existeDNI(int dni);

///LISTADOS
void ListadoAdministradoresOrdenadoPorLegajo();
int cantEmpleados(int tipoEmpleado);
void CargarVectorEmpleados(Empleado* vEmpleados, int tipoEmpleado);
void OrdenarVectorEmpleadosPorLegajo(Empleado* vEmpleados, int cantRegistros);
void MostrarEmpleados(Empleado* vEmpleados, int cantRegistros);
void ListadoAdministradoresOrdenadoPorApellido();
void OrdenarVectorEmpleadosPorApellido(Empleado* vEmpleados, int cantRegistros);
void ListadoMedicosOrdenadoPorLegajo();

void ListadoMedicosOrdenadoPorApellido();

void ListadoMedicosOrdenadoPorEspecialidad();
void OrdenarVectorEmpleadosPorEspecialidad(Empleado* vEmpleados, int cantRegistros);



///CONSULTAS
void ConsultaPacientePorDNI();

void ConsultaPacientePorRangoEdad();
	int cantPacientes();
	bool validarEdad(int edadInicial, int edadTope);
	void CargarVectorPacientes(Paciente *vPacientes, int edadInicial, int edadTope);

void ConsultaDeTurnosNoAsistidos();
	int obtenerCantTurnos();

void ConsultaDeTurnosPorRangoDeFecha();

void ConsultaDeTurnosPorEspecialidad();
	int obtenerEspecialidad(int legajoMedico);

///INFORMES
void CantidadTurnosAsignadosEnMes();
	void mostrarCantTurnosAsignadosEnMes(int cont, int mes, int anio);
void AusenciasTurnosMes();
	void mostrarAusenciasATurnosEnMes(int cont, int mes, int anio);
void RecaudacionMensual(); ///ESTA FUNCION PERTENECE A Informes
void RecaudacionAnual(); ///ESTA FUNCION PERTENECE A Informes
void RecaudacionPorCliente(); ///ESTA FUNCION PERTENECE A Informes
void RecaudacionPorEspecialidad();
	void mostrarRecaudacion(float* vTotalPorEspecialidad);


///Administrador > Configuraciones > Exportar datos
void ExportarPacientes(); ///Esta funcion pertenece a configuracion > exportar datos > pacientes

void ExportarTurnos(); ///Esta funcion pertenece a configuracion > exportar datos > turnos

void ExportarPagosConsultas(); ///Esta funcion pertenece a configuracion > exportar datos > Pagos Consultas

void ExportarHistoriasClinicas(); ///Esta funcion pertenece a configuracion > exportar datos > Historias Clinicas

void ExportarEmpleados();  ///Esta funcion pertenece a configuracion > exportar datos > Empleados

void ExportarTodosLosArchivos(); ///Esta funcion pertenece a configuracion > exportar datos > Exportar todos los archivos


//void CargarHorarios(Cadena *horarios);