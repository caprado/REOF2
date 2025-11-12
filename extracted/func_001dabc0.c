void func_001dabc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001dabc0: addiu $sp, $sp, -0xb0
    v1 = 0xff;                                                  // 0x001dabc4: addiu $v1, $zero, 0xff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dabcc: addu.qb $zero, $sp, $s1
    a0 = *(uint8_t*)((a0) + 0xc8c);                             // 0x001dabd8: lbu $a0, 0xc8c($a0)
    if (a0 == v1) goto label_0x1dac30;                          // 0x001dabdc: beq $a0, $v1, 0x1dac30
    /* nop */                                                   // 0x001dabe0: nop 
    func_005895c0();  // 0x5895c0                               // 0x001dabe4: jal 0x5895c0
    a0 = a0 & 0xff;                                             // 0x001dabe8: andi $a0, $a0, 0xff
    v1 = -1;                                                    // 0x001dabf0: addiu $v1, $zero, -1
    if (s0 == v1) goto label_0x1dac30;                          // 0x001dabf8: beq $s0, $v1, 0x1dac30
    /* nop */                                                   // 0x001dabfc: nop 
    a0 = *(uint8_t*)((s1) + 3);                                 // 0x001dac00: lbu $a0, 3($s1)
    func_006905d0();  // 0x6905d0                               // 0x001dac04: jal 0x6905d0
    a1 = 0x24 << 16;                                            // 0x001dac0c: lui $a1, 0x24
    a0 = sp + 0x30;                                             // 0x001dac14: addiu $a0, $sp, 0x30
    func_0010a570();  // 0x10a4d8                                // 0x001dac18: jal 0x10a4d8
    a1 = &str_00247948;  // "common"                            // 0x001dac1c: addiu $a1, $a1, 0x7948
    v0 = *(uint8_t*)((s1) + 3);                                 // 0x001dac20: lbu $v0, 3($s1)
    a0 = sp + 0x30;                                             // 0x001dac24: addiu $a0, $sp, 0x30
    func_001ad120();  // 0x1ad030                                // 0x001dac28: jal 0x1ad030
    a1 = v0 + 8;                                                // 0x001dac2c: addiu $a1, $v0, 8
label_0x1dac30:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dac34: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dac38: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dac3c: jr $ra
    sp = sp + 0xb0;                                             // 0x001dac40: addiu $sp, $sp, 0xb0
}