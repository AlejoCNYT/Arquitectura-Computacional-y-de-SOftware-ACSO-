program lab02e;

var
    n, cont : integer;
    a, b : real;
    s : char;
begin
    readln(n);
    cont := 0;
    repeat
        readln(s);
        readln(a);
        readln(b);
        if s = '+' then
            writeln(a+b)
        else if s = '-' then
            writeln(a-b)
        else if s = '*' then
            writeln(a*b)
        else if ((s = '/') and (b <> 0)) then
            writeln(a/b)
        else
            writeln('Indefinido');
        cont := cont + 1;  
    until n = cont;
end.



