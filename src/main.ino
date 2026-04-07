// CONFIGURACIÓN DE PINES///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Sensores
const int PIN_PIR = 4;
const int PIN_MICROWAVE = 5;

// Cámara 
const int PIN_CAM_SIOD = 18;
const int PIN_CAM_SIOC = 23;

// Servomotores
const int PIN_SERVO_PAN = 12;   // Horizontal
const int PIN_SERVO_TILT = 13;  // Vertical

// Iluminación
const int PIN_LDR = 34;
const int PIN_LUZ = 26;


// PROTOTIPOS DE FUNCIONES/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void leerSensores();
void activarCamara();
void capturarImagen();
void procesarImagen();
void detectarPersona();
void calcularPosicionObjeto();
void moverServos();
void controlarIluminacion();
void enviarNotificacionTelegram();
void volverEstadoReposo();


void setup() {
  pinMode(PIN_PIR, INPUT);
  pinMode(PIN_MICROWAVE, INPUT);
  pinMode(PIN_LUZ, OUTPUT);
}


void loop() {

}