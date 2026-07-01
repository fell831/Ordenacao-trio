# 🤖 Uso de Ferramentas de IA no Projeto

## Ferramentas Utilizadas
- [ ] ChatGPT / GPT-4o
- [ ] GitHub Copilot
- [x] Claude / Gemini
- [ ] Outra: _______________

## Como Usamos (exemplos reais)
| Prompt / Solicitação | O que a IA gerou | O que adaptamos/validamos |
|----------------------|------------------|---------------------------|
| "gcov -o . src/avancados/quick.c gerando erro cannot open notes file no Windows" | Explicou o achatamento de nomes de objetos que o GCC faz no PowerShell e sugeriu usar prefixo do executável (`gcov test_basic-quick.c`). | Validamos no terminal local e conseguimos extrair 100% de cobertura nos relatórios `.gcov` gerados. |
| "undefined reference to __gcov_init ao compilar após alteração de pasta" | Sugeriu passar as flags de cobertura tanto na compilação quanto na linkagem final no comando unificado do GCC. | Adaptamos a linha de comando direto no terminal, o que sanou o erro de linkagem cruzada de sensores. |
| "Move-Item : Não é possível criar um arquivo já existente ao mover os arquivos .gcov no PowerShell" | Explicou que o Windows bloqueia a sobreposição e sugeriu injetar o parâmetro `-Force`. | Aplicamos o comando `Move-Item *.gcov docs/ -Force` para atualizar os relatórios na pasta oficial com sucesso. |

## Validação & Domínio
- [x] Compilamos e rodamos todo código gerado ou sugerido
- [x] Todos conseguem explicar o funcionamento de cada algoritmo em 2 minutos
- [x] Não submetemos blocos inteiros sem revisão linha a linha

## Reflexão Final (3-5 linhas)
A IA atuou como um copiloto técnico indispensável para calibrar o ambiente do GCC e do Git dentro do sistema Windows/PowerShell, poupando horas de depuração de caminhos e linkagens. Contudo, a validação lógica e a estruturação final das suítes de testes dependeram do discernimento crítico do trio. O maior aprendizado foi compreender que a IA acelera diagnósticos de infraestrutura, mas o domínio do código fonte permanece sob responsabilidade humana.
