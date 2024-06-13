from models.Rota import Rota


def run() -> list[Rota]:
    lista = []
    dados = [
        ("De Rio de Janeiro até São Paulo", "RS", 1),
        ("De São Paulo até Rio de Janeiro", "SR", 1),
        ("De Brasília até São Paulo", "BS", 1.2),
        ("De São Paulo até Brasília", "SB", 1.2),
        ("De Brasília até Rio de Janeiro", "BR", 1.5),
        ("De Rio de Janeiro até Brasília", "RB", 1.5),
    ]

    for descricao, sigla, multiplicador in dados:
        lista.append(Rota(descricao, sigla, multiplicador))

    return lista
