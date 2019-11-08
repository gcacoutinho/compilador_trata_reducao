void trataReducao()
{
	switch (tabEstado[estado][token])
	{
	case r1:
		pop(1);
		break;
	case r2:
		pop(3);
		d[1].atributo = incluiTabSimb(d[1], Variavel);
		gera(STO, d[3].atributo, d[1].atributo);
		break;
	case r3:
		pop(10);
		break;
	case r4:
		pop(8);
		break;
	case r5:
		pop(3);
		break;
	case r6:
		pop(1);
		break;
	case r7:
		pop(3);
		break;
	case r8:
		pop(1);
		break;
	case r9:
		pop(3);
		d[0].atributo = temp();
		gera(ADD, d[1].atributo, d[3].atributo, d[0].atributo);
		break;
	case r10:
		pop(1);
		break;
	case r11:
		pop(3);
		d[0].atributo = temp();
		gera(MUL, d[1].atributo, d[3].atributo, d[0].atributo);
		break;
	case r12:
		pop(1);
		break;
	case r13:
		pop(3);
		d[0].atributo = d[2].atributo;
		break;
	case r14:
		pop(1);
		d[0].atributo = incluiTabSimb(d[1].simbolo, Variavel);
		break;
	case r15:
		pop(1);
		d[0].atributo = incluiTabSimb(d[1].symbol, Constante);
		break;
	case r16:
		pop(0);
		break;
	case r17:
		pop();
		break;
	}
}
