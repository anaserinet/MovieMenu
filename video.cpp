#include "video.hpp"

// Constructor
Video::Video(int numID_vid, std::string nombre_vid, float duracionMin_vid,
             std::string genero_vid, float promedio_vid) {
  numID_vid_ = numID_vid;
  nombre_vid_ = nombre_vid;
  duracionMin_vid_ = duracionMin_vid;
  genero_vid_ = genero_vid;
  promedio_vid_ = promedio_vid;

  std::cout << "-Object Created-" << std::endl;
};

// Metodos
void Video::mostrarInformacion(float promedio, float ultima_calificacion) {
  std::cout << "---------------" << nombre_vid_ << "------------------------"
            << std::endl;
  std::cout << "ID: " << numID_vid_ << std::endl;
  std::cout << "Genero : " << genero_vid_ << std::endl;
  std::cout << "Duracion : " << duracionMin_vid_ << " minutos" << std::endl;
  std::cout << "Ultima calificacion que le diste: " << ultima_calificacion
            << std::endl;
  std::cout << "Calificacion promedio: " << promedio << std::endl;
  std::cout << "-------------------------------------------------------"
            << std::endl;
};

void Video::agregarCalificacion(float calificacion_vid) {
  std::cout << "La calificacion que le diste a " << nombre_vid_
            << " es de: " << calificacion_vid << std::endl;
  calificaciones_.push_back(
      calificacion_vid); // agrega la calificacion que le dio el usuario a la
                         // lista de calificaciones
};

float Video::promCalificacion() {
  float suma_calificaciones = 0;
  for (float i : calificaciones_) {
    suma_calificaciones += i;
  }
  float numero_de_calificaciones = calificaciones_.size();
  promedio_vid_ = suma_calificaciones / numero_de_calificaciones;
  return promedio_vid_;
};

bool Video::desea_calificar() {
  std::string si_o_no;
  std::cout << "Desea calificar a " << nombre_vid_
            << "? (Ingrese 'si' o 'no'): " << std::endl;
  std::cin >> si_o_no;
  return si_o_no == "si";
};

// funciones amiga que sobrecarga >, < y == dependiendo de los promedios de los
// videos
bool operator>(const Video Video1, const Video Video2) {
  return Video1.promedio_vid_ > Video2.promedio_vid_;
};
bool operator==(const Video Video1, const Video Video2) {
  return Video1.promedio_vid_ == Video2.promedio_vid_;
}
bool operator<(const Video Video1, const Video Video2) {
  return Video1.promedio_vid_ < Video2.promedio_vid_;
}