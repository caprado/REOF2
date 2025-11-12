void func_001d8950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001d8950: addiu $sp, $sp, -0xa0
    a2 = a0 & 0xffff;                                           // 0x001d8954: andi $a2, $a0, 0xffff
    if (a2 == 0) goto label_0x1d89a4;                           // 0x001d895c: beqz $a2, 0x1d89a4
    at = 0x31 << 16;                                            // 0x001d8964: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d8968: lui $a1, 0x24
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d896c: lw $s0, 0x37fc($at)
    a0 = sp + 0x20;                                             // 0x001d8970: addiu $a0, $sp, 0x20
    func_0010a570();  // 0x10a4d8                                // 0x001d8974: jal 0x10a4d8
    a1 = &str_002476b0;  // "data\\rom\\motion\\player\\pl%02d_pc_000.bin" // 0x001d8978: addiu $a1, $a1, 0x76b0
    v0 = 2 << 16;                                               // 0x001d897c: lui $v0, 2
    a0 = sp + 0x20;                                             // 0x001d8980: addiu $a0, $sp, 0x20
    func_001d33e0();  // 0x1d3390                                // 0x001d898c: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d8990: ori $a2, $v0, 1
    func_001d88c0();  // 0x1d8810                                // 0x001d899c: jal 0x1d8810
    a2 = 1;                                                     // 0x001d89a0: addiu $a2, $zero, 1
label_0x1d89a4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d89a8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d89ac: jr $ra
    sp = sp + 0xa0;                                             // 0x001d89b0: addiu $sp, $sp, 0xa0
}