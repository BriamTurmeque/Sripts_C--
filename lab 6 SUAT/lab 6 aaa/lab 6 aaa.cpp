
using namespace std;
class Estudiante {
private:

    string nombre, documento, asignatura;
    int tipo_documento;
    float nota_corte1, nota_corte2, nota_corte3;

public:

    Estudiante() {
        nombre = documento = asignatura = "";
        tipo_documento = 0;
        nota_corte1 = nota_corte2 = nota_corte3 = 0.0;
    }

    Estudiante(string newNombre, string newDoc, string newAsig, int newTipo, float newNota1, float newNota2, float newNota3) {

        nombre = newNombre;
        documento = newDoc;
        asignatura = newAsig;
        tipo_documento = newTipo;
        nota_corte1 = newNota1;
        nota_corte2 = newNota2;
        nota_corte3 = newNota3;

    }

    string mostrarTipoDocumento() {
        //conversion
    }
    float getPromedio() {

        float promedio = 0;
        float n1 = nota_corte1 * 0.30;
        float n2 = nota_corte2 * 0.30;
        float n3 = nota_corte3 * 0.40;
        promedio = n1 + n2 + n3;
        return promedio;
    }

    string getNombre() {
        return nombre;
    }

    string getAsignatura() {
        return asignatura;
    }

    string getDocumento() {
        return documento;
    }

    int getTipoDoc() {
        return tipo_documento;
    }

    float getNota1() {
        return nota_corte1;
    }

    float getNota2() {
        return nota_corte2;
    }

    float getNota3() {
        return nota_corte3;
    }

    void setNombre(string newNombre) {
        nombre = newNombre;
    }

    void setDocumento(string newDocumento) {
        documento = newDocumento;
    }

    void setAsignatura(string newAsignatura) {
        asignatura = newAsignatura;
    }

    void setTipoDoc(int newTipo) {
        tipo_documento = newTipo;
    }

    void setNota1(float newNota1) {
        nota_corte1 = newNota1;
    }

    void setNota2(float newNota2) {
        nota_corte2 = newNota2;
    }

    void setNota3(float newNota3) {
        nota_corte3 = newNota3;
    }

    void resetear() {
        nombre = documento = asignatura = "";
        tipo_documento = 0;
        nota_corte1 = nota_corte2 = nota_corte3 = 0.0;
    }

    void toString() {
        //retorna algun texto
        cout << "nombre: " << nombre << endl;
        cout << "documento: " << documento << endl;
        cout << "tipo de documento: " << tipo_documento << endl;
        cout << "asignatura: " << asignatura << endl;
        cout << "nota corte 1: " << nota_corte1 << endl;
        cout << "nota corte 2: " << nota_corte2 << endl;
        cout << "nota corte 3: " << nota_corte3 << endl;

        float prom = getPromedio();

        cout << "su promedio es: " << prom << endl;

        string aprobo = siAprobo(prom);
        cout << aprobo;

    }

    string siAprobo(float prom) {
        string res = "";
        if (prom >= 3.0) {
            res = "---aprobo la asignatura---"; cout << endl;
        }
        else {
            res = "---no aprobo la asignatura---"; cout << endl;
        }
        return res;
    }
};
void mostrarTodosEstudiantes(Estudiante e1, Estudiante e2, Estudiante e3) {
    cout << "-------------" << endl;
    e1.toString();
    cout << "-------------" << endl;
    cout << "-------------" << endl;
    e2.toString();
    cout << "-------------" << endl;
    cout << "-------------" << endl;
    e3.toString();
    cout << "-------------" << endl;
}
int main()
{

    Estudiante e1 = Estudiante("felipe", "1124124121", "matematicas", 1, 1.0, 4.0, 1.0);
    Estudiante e2 = Estudiante("roldan", "12341254125", "religion", 1, 5.0, 4.0, 5.0);
    Estudiante e3 = Estudiante();
    int opc = 0;

    int aux = 3;
    while (opc != 5) {
        system("cls");
        cout << "menu: " << endl << endl;
        cout << "1. Crear un estudiante" << endl;
        cout << "2. Modificar datos de estudiante" << endl;
        cout << "3. Mostrar datos estudiante" << endl;
        cout << "4. Eliminar estudiante" << endl;
        cout << "5. Salir" << endl << endl << endl;

        cout << "Que desea realizar? "; cin >> opc;

        if (opc > 0 && opc < 5) {
            if (opc == 1) {
                string nombreNew, documentoNew, asignaturaNew;
                int tipo_documentoNew;
                float nota_corte1New, nota_corte2New, nota_corte3New;
                if (aux <= 3) {
                    aux++;
                    cout << "Nombre: "; cin >> nombreNew;
                    cout << "documento: "; cin >> documentoNew;
                    cout << "tipo de documento: "; cin >> tipo_documentoNew;
                    cout << "asignatura: "; cin >> asignaturaNew;
                    cout << "nota corte 1: "; cin >> nota_corte1New;
                    cout << "nota corte 2: "; cin >> nota_corte2New;
                    cout << "nota corte 3: "; cin >> nota_corte3New;
                    e3 = Estudiante(nombreNew, documentoNew, asignaturaNew, tipo_documentoNew, nota_corte1New, nota_corte2New, nota_corte3New);

                }
                else {
                    cout << "no se pueden ingresar mas estudiantes"; cout << endl << endl; system("pause");
                }
            }
            else if (opc == 2) { continue; }
            else if (opc == 3) {
                mostrarTodosEstudiantes(e1, e2, e3); system("pause");
            }
            else if (opc == 4) {
                int elim;
                cout << "que estudiante desea eliminar: "; cin >> elim;
                if (elim == 1) { e1.resetear(); }
                else if (elim == 2) { e2.resetear(); }
                else if (elim == 3) { e3.resetear(); }
                else {
                    cout << "digito un estudiante incorrecto";
                }
            }

        }
        else {
            cout << "digito una opcion incorrecta";
            cout << "Que desea realizar? "; cin >> opc;
        }
    }


    return 0;
}
