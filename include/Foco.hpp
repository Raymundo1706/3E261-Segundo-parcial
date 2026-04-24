#programa once
#includev <EstadoFoco.hpp>

class Foco
{
    private:
        EstadoFoco encendido;
}
    EstadoFoco estado;

    public:
        EstadoFoco() {
            this->encendido = true;
        }
        void Encender(){
            this->encendido = true;
        }
        void Apagar(){
            this->encendido = false;
        }

        EstadoFoco LeerEstado(){
            return this->encendido;
        }