void trataReducao()
{
	switch (tabEstado[estado][token])
	{
		case r0:
			encerra();
			break;
		case r1:
			pop(1);
			d[0].atributo = d[1].atributo;
			// Ver se tem push
			break;
		case r2:
			pop(3);
			d[1].atributo = incluiTabSimb(d[1], Variavel);
			d[0].estado = tabEstado[estado][E];
			gera(STO, d[3].atributo, d[1].atributo);
			break;
		case r3:
			// IF
			pop(10);
			remenda();
			remenda();
			remenda();
			remenda();
			break;
		case r4:
			// While
			gera (J, d[2].indiceQuadrupla, NADA, NADA);
			remenda(d[4].indiceQuadr, JF, d[3].indiceSimb, prox, NADA);
			pop(8);
			break;
		case r5:
			pop(3);
			d[0].atributo = d[2].atributo;
			d[0].simb = B;
			d[0].estado = tabEstado[estado][B];
			push(d[0]);
			estado = d[0].estado;
			break;
		case r6:
			pop(1);
			d[0].atributo = d[1].atributo;
			d[0].simb = B;
			d[0].estado = tabEstado[estado][B];
			push(d[0]);
			break;
		case r7:	
			pop(3);
			d[0].atributo = d[1].atributo;
			d[0].simb = L;
			d[0].estado = tabEstado[estado][L];
			push(d[0]);
			break;
		case r8:
			pop(1);
			d[0].atributo = d[1].atributo;
			d[0].simb = L;
			d[0].estado = tabEstado[estado][L];
			push(d[0]);
			break;
		case r9:
			pop(3);
			d[0].atributo = temp();
			d[0].simb = E;
			d[0].estado = d[1].estado;
			gera(ADD, d[1].atributo, d[3].atributo, d[0].atributo);
			push(d[0]);
			estado = d[0].estado;
			break;
		case r10:
			pop(1);
			d[0].atributo = d[1].atributo;
			d[0].simb = E;
			d[0].estado = tabEstado[estado][E];
			push(d[0]);
			estado = d[0].estado;
			break;
		case r11:
			pop(3);
			d[0].atributo = temp();
			d[0].simb = T;
			d[0].estado; = d[1].estado;
			gera(MUL, d[1].atributo, d[3].atributo, d[0].atributo);
			push(d[0]);
			estado = d[0].estado;
			break;
		case r12:
			pop(1);
			d[0].atributo = d[1].atributo;
			d[0].simb = T;
			d[0].estado = tabEstado[estado][T];
			push(d[0]);
			estado = d[0].estado;
			break;
		case r13:
			pop(3);
			d[0].atributo = d[2].atributo;
			d[0].simb = F;
			d[0].estado = tabEstado[estado][F];
			push(d[0]);
			estado = d[0].estado;
			break;
		case r14:
			pop(1);
			d[0].atributo = incluiTabSimb(d[1].simb, Variavel);
			d[0].simb = F;
			d[0].estado = tabEstado[estado][F];
			push(d[0]);
			estado = d[0].estado;
			break;
		case r15:
			pop(1);
			d[0].atributo = incluiTabSimb(d[1].simb, Constante);
			d[0].simb = F;
			d[0].estado = tabEstado[estado][F];
			push(d[0]);
			estado = d[0].estado;
			break;
		case r16:
			// Vazio
			break;
		case r17:
			// Vazio
			break;
	}
}
