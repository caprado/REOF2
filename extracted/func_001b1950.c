void func_001b1950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001b18e0();  // Tail call                        // 0x001b1954: j 0x1b1870
    a2 = 0x1f4;                                                 // 0x001b1958: addiu $a2, $zero, 0x1f4
    /* nop */                                                   // 0x001b195c: nop 
    sp = sp + -0x10;                                            // 0x001b1960: addiu $sp, $sp, -0x10
    v1 = a1 & 0xff;                                             // 0x001b1964: andi $v1, $a1, 0xff
    v0 = 1;                                                     // 0x001b1968: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1b19c0;                          // 0x001b196c: beq $v1, $v0, 0x1b19c0
    v0 = a1 << 1;                                               // 0x001b1978: sll $v0, $a1, 1
label_0x1b197c:
    v0 = a0 + v0;                                               // 0x001b197c: addu $v0, $a0, $v0
    v1 = v0 + 0xfa4;                                            // 0x001b1980: addiu $v1, $v0, 0xfa4
    v0 = *(uint16_t*)((v0) + 0xfa4);                            // 0x001b1984: lhu $v0, 0xfa4($v0)
    v0 = v0 & 0x8000;                                           // 0x001b1988: andi $v0, $v0, 0x8000
    if (v0 == 0) goto label_0x1b1998;                           // 0x001b198c: beqz $v0, 0x1b1998
    /* nop */                                                   // 0x001b1990: nop 
    *(uint16_t*)(v1) = 0;                                       // 0x001b1994: sh $zero, 0($v1)
label_0x1b1998:
    a1 = a1 + 1;                                                // 0x001b1998: addiu $a1, $a1, 1
    v0 = ((unsigned)a1 < (unsigned)0x7d0) ? 1 : 0;              // 0x001b199c: sltiu $v0, $a1, 0x7d0
    if (v0 != 0) goto label_0x1b197c;                           // 0x001b19a0: bnez $v0, 0x1b197c
    v0 = a1 << 1;                                               // 0x001b19a4: sll $v0, $a1, 1
    a2 = *(uint16_t*)((a0) + 0x1f44);                           // 0x001b19a8: lhu $a2, 0x1f44($a0)
    a1 = 5;                                                     // 0x001b19ac: addiu $a1, $zero, 5
    func_001b1870();  // 1b1870                                // 0x001b19b0: jal 0x1b1870
    a0 = a0 + 4;                                                // 0x001b19b4: addiu $a0, $a0, 4
    goto label_0x1b1a0c;                                        // 0x001b19b8: b 0x1b1a0c
label_0x1b19c0:
    v0 = v1 << 1;                                               // 0x001b19c4: sll $v0, $v1, 1
label_0x1b19c8:
    v0 = a0 + v0;                                               // 0x001b19c8: addu $v0, $a0, $v0
    a1 = v0 + 0xfa4;                                            // 0x001b19cc: addiu $a1, $v0, 0xfa4
    v0 = *(uint16_t*)((v0) + 0xfa4);                            // 0x001b19d0: lhu $v0, 0xfa4($v0)
    v0 = v0 & 0x8000;                                           // 0x001b19d4: andi $v0, $v0, 0x8000
    if (v0 != 0) goto label_0x1b19e4;                           // 0x001b19d8: bnez $v0, 0x1b19e4
    /* nop */                                                   // 0x001b19dc: nop 
    *(uint16_t*)(a1) = 0;                                       // 0x001b19e0: sh $zero, 0($a1)
label_0x1b19e4:
    v1 = v1 + 1;                                                // 0x001b19e4: addiu $v1, $v1, 1
    v0 = ((unsigned)v1 < (unsigned)0x7d0) ? 1 : 0;              // 0x001b19e8: sltiu $v0, $v1, 0x7d0
    if (v0 != 0) goto label_0x1b19c8;                           // 0x001b19ec: bnez $v0, 0x1b19c8
    v0 = v1 << 1;                                               // 0x001b19f0: sll $v0, $v1, 1
    a2 = *(uint16_t*)((a0) + 0x1f46);                           // 0x001b19f4: lhu $a2, 0x1f46($a0)
    v0 = 0x7d0;                                                 // 0x001b19f8: addiu $v0, $zero, 0x7d0
    a1 = v0 - a2;                                               // 0x001b19fc: subu $a1, $v0, $a2
    func_001b1870();  // 1b1870                                // 0x001b1a00: jal 0x1b1870
    a0 = a0 + 4;                                                // 0x001b1a04: addiu $a0, $a0, 4
label_0x1b1a0c:
    return;                                                     // 0x001b1a0c: jr $ra
    sp = sp + 0x10;                                             // 0x001b1a10: addiu $sp, $sp, 0x10
}