void func_001afa80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001afa80: addiu $sp, $sp, -0x20
    func_001afb80();  // 0x1afb40                                // 0x001afa8c: jal 0x1afb40
    v1 = 3;                                                     // 0x001afa94: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1afae8;                          // 0x001afa98: beq $v0, $v1, 0x1afae8
    /* nop */                                                   // 0x001afa9c: nop 
    v1 = 2;                                                     // 0x001afaa0: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1afae8;                          // 0x001afaa4: beq $v0, $v1, 0x1afae8
    /* nop */                                                   // 0x001afaa8: nop 
    v1 = 1;                                                     // 0x001afaac: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1afad8;                          // 0x001afab0: beq $v0, $v1, 0x1afad8
    if (v0 == 0) goto label_0x1afac8;                           // 0x001afab8: beqz $v0, 0x1afac8
    goto label_0x1afae8;                                        // 0x001afac0: b 0x1afae8
    /* nop */                                                   // 0x001afac4: nop 
label_0x1afac8:
    func_007d3d40();  // 0x7d3d40                               // 0x001afac8: jal 0x7d3d40
    /* nop */                                                   // 0x001afacc: nop 
    goto label_0x1afb00;                                        // 0x001afad0: b 0x1afb00
label_0x1afad8:
    func_007d3600();  // 0x7d3600                               // 0x001afad8: jal 0x7d3600
    /* nop */                                                   // 0x001afadc: nop 
    goto label_0x1afafc;                                        // 0x001afae0: b 0x1afafc
    /* nop */                                                   // 0x001afae4: nop 
label_0x1afae8:
    at = 0x31 << 16;                                            // 0x001afae8: lui $at, 0x31
    v0 = g_003137bc;  // Global at 0x003137bc                   // 0x001afaec: lhu $v0, 0x37bc($at)
    v0 = v0 ^ s0;                                               // 0x001afaf0: xor $v0, $v0, $s0
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001afaf4: sltu $v0, $zero, $v0
    v0 = -v0;                                                   // 0x001afaf8: negu $v0, $v0
label_0x1afafc:
label_0x1afb00:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001afb00: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001afb04: jr $ra
    sp = sp + 0x20;                                             // 0x001afb08: addiu $sp, $sp, 0x20
}