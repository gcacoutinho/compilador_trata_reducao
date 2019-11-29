void _pop(int n ){
	for(int ii = n; ii > 0; ii--){
		unidPilhaDePop[ii] = pop()
	}
}
void trataReducao()
{
	switch (tabEstado[estado][token])
	{
		case r0:
			encerra();
			break;
		case r1:
			_pop(1);
			unidPilhaDePop[0].atributo = unidPilhaDePop[1].atributo;
			// Ver se tem push
			break;
		case r2:
			_pop(3);
			unidPilhaDePop[1].atributo.end = incluiTabSimb(unidPilhaDePop[1].atributo.asciiDoFont, Variavel);
			unidPilhaDePop[0].estado = tabEstado[estado][E];
			gera(STO, unidPilhaDePop[3].atributo, unidPilhaDePop[1].atributo);
			break;
		case r3:
			// IF
			_pop(10);
			remenda(unidPilhaDePop[5].indiceQuadrupla, JF, unidPilhaDePop[3].indiceSimb, unidPilhaDePop[8].indiceQuadrupla+1, NADA);
			remenda(unidPilhaDePop[8].indiceQuadrupla, J, prox, NADA, NADA);
			break;
		case r4:
			// While
			_pop(8);
			gera (J, unidPilhaDePop[2].indiceQuadrupla, NADA, NADA);
			remenda(unidPilhaDePop[4].indiceQuadr, JF, unidPilhaDePop[3].indiceSimb, prox, NADA);
			break;
		case r5:
			_pop(3);
			unidPilhaDePop[0].atributo = unidPilhaDePop[2].atributo;
			unidPilhaDePop[0].simb = B;
			unidPilhaDePop[0].estado = tabEstado[estado][B];
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r6:
			_pop(1);
			unidPilhaDePop[0].atributo = unidPilhaDePop[1].atributo;
			unidPilhaDePop[0].simb = B;
			unidPilhaDePop[0].estado = tabEstado[estado][B];
			push(unidPilhaDePop[0]);
			break;
		case r7:	
			_pop(3);
			unidPilhaDePop[0].atributo = unidPilhaDePop[1].atributo;
			unidPilhaDePop[0].simb = L;
			unidPilhaDePop[0].estado = tabEstado[estado][L];
			push(unidPilhaDePop[0]);
			break;
		case r8:
			_pop(1);
			unidPilhaDePop[0].atributo = unidPilhaDePop[1].atributo;
			unidPilhaDePop[0].simb = L;
			unidPilhaDePop[0].estado = tabEstado[estado][L];
			push(unidPilhaDePop[0]);
			break;
		case r9:
			_pop(3);
			unidPilhaDePop[0].atributo.end = temp();
			unidPilhaDePop[0].simb = E;
			unidPilhaDePop[0].estado = unidPilhaDePop[1].estado;
			gera(ADD, unidPilhaDePop[1].atributo, unidPilhaDePop[3].atributo, unidPilhaDePop[0].atributo);
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r10:
			_pop(1);
			unidPilhaDePop[0].atributo = unidPilhaDePop[1].atributo;
			unidPilhaDePop[0].simb = E;
			unidPilhaDePop[0].estado = tabEstado[estado][E];
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r11:
			_pop(3);
			unidPilhaDePop[0].atributo.end = temp();
			unidPilhaDePop[0].simb = T;
			unidPilhaDePop[0].estado; = unidPilhaDePop[1].estado;
			gera(MUL, unidPilhaDePop[1].atributo, unidPilhaDePop[3].atributo, unidPilhaDePop[0].atributo);
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r12:
			_pop(1);
			unidPilhaDePop[0].atributo = unidPilhaDePop[1].atributo;
			unidPilhaDePop[0].simb = T;
			unidPilhaDePop[0].estado = tabEstado[estado][T];
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r13:
			_pop(3);
			unidPilhaDePop[0].atributo = unidPilhaDePop[2].atributo;
			unidPilhaDePop[0].simb = F;
			unidPilhaDePop[0].estado = tabEstado[estado][F];
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r14:
			_pop(1);
			unidPilhaDePop[0].atributo = incluiTabSimb(unidPilhaDePop[1].simb, Variavel);
			unidPilhaDePop[0].simb = F;
			unidPilhaDePop[0].estado = tabEstado[estado][F];
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r15:
			_pop(1);
			unidPilhaDePop[0].atributo = incluiTabSimb(unidPilhaDePop[1].simb, Constante);
			unidPilhaDePop[0].simb = F;
			unidPilhaDePop[0].estado = tabEstado[estado][F];
			push(unidPilhaDePop[0]);
			estado = unidPilhaDePop[0].estado;
			break;
		case r16:
			// Vazio
			break;
		case r17:
			// Vazio
			break;
	}
}
