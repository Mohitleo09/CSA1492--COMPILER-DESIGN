Program: (digit_or_not.l
%%
[0-9]+ {printf("\nValid digit \n");} 
.* printf("\nInvalid digit\n");
%%
int yywrap(){}
int main()											
{
yylex();
return 0;
}
