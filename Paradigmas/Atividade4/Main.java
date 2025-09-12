import java.util.ArrayList;

class Livro {
    String titulo;
    String autor;
    int anoPublicacao;

    Livro(String titulo, String autor, int anoPublicacao) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = anoPublicacao;
    }
}

public class Main {
    public static void main(String[] args) {
        ArrayList<Livro> livros = new ArrayList<>();

        livros.add(new Livro("O Hobbit", "J.R.R. Tolkien", 1937));
        livros.add(new Livro("1984", "George Orwell", 1949));
        livros.add(new Livro("Dom Casmurro", "Machado de Assis", 1899));

        for (Livro l : livros) {
            System.out.println(l.titulo);
        }
    }
}
