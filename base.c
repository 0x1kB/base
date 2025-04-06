
// 2025 CC-BY-SA 4.0 misc147, www.github.com/0x1kB


static int asmuitobuf(char *buf, unsigned int i, unsigned int base, int prec, const char pad){
	//# define asmuitobuf(_buf, _uint,...) _asmuitobuf( _buf,_uint,DEFAULT_ARGS( (10,0,'0'), __VA_ARGS__) )
	char *pbuf = buf;
	uint _base=base;

	asm volatile ( R"(
.MARKAsM_asmuitobuf:
	xor %%edx,%%edx
	#push %%rdx

	inc %%edx
	push %%rdx
	mov %%eax,%%r9d
1:
	cmp %%eax, %%esi
	jb 8f
	push %%rax
	dec %%ecx
	mul %%r9d
	jno 1b

8: # padding  
	dec %%ecx
	jle 2f
	mov %4,%%al
	repnz stosb
	#jmp 2f

6:
	pop %%rcx
	mov $0x2f,%%eax
3:
	inc %%eax
	sub %%ecx,%%esi
	jae 3b
	add %%ecx,%%esi

	#cmp %%edx,%%esi
	#jb 4f
	#inc %%eax
	#sub %%edx,%%esi
	#jmp 3b

4:
	cmp $'9',%%eax
	jbe 5f
	add $39,%%eax
5:
	stosb
2:

	dec %%ecx  # test for 1
	jnz 6b

9:
	movb %%cl,(%%rdi)
	)" : "+c"(prec), "+S"(i), "+D"(pbuf), "+a"(_base) : "g"(pad) : "rdx", "r9", "memory", "cc" );
						
	return ( pbuf-buf );
}



MAIN{
	if ( argc<3 || ( argv[1][0] == '-' )){
		ewrites("usage: base tobase number [numberbase (2-36)] [padding] [padchar]\n"
				"\n 2025 CC-BY-SA misc147\n www.github.com/0x1Kb\n");
		exit(1);
	}

	int base,number,numberbase=10,padding=0;
	char pad = '0';

	base = strtol(argv[1],0,0);
	if ( argc>3 )
		numberbase = strtol(argv[3],0,0);

	number = strtol(argv[2],0,numberbase);

	if ( argc>4 )
		padding = strtol(argv[4],0,0);

	if ( argc>5 )
		pad = *argv[5];

	char buf[68];
	
	int len = asmuitobuf( buf, number, base, padding, pad );
	buf[len] = '\n';

	write(1,buf,len+1);


	exit(0);
}




