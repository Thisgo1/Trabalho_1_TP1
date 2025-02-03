int main() {
    ControladoraViagem cv;
    ControladoraDestino cd;
    ControladoraAtividade ca;
    ControladoraHospedagem ch;

    cv.criarViagem(1, "Viagem à Praia", "Excelente");
    cd.criarDestino(1, "Praia do Rosa", "2023-01-01", "2023-01-07", "Ótima");
    ca.criarAtividade(1, "Surfe", "2023-01-02", "10:00", "2 horas", 100.0, "Divertido");
    ch.criarHospedagem(1, "Hotel Rosa", "2023-01-01", "Confortável");

    cv.listarViagens();
    cd.listarDestinos();
    ca.listarAtividades();
    ch.listarHospedagens();

    return 0;
}
