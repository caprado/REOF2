void func_00138b80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00138b80: addiu $sp, $sp, -0x10
    if (a2 <= 0) goto label_0x138bbc;                           // 0x00138b90: blez $a2, 0x138bbc
    a3 = -0x56;                                                 // 0x00138b98: addiu $a3, $zero, -0x56
    /* nop */                                                   // 0x00138b9c: nop 
label_0x138ba0:
    v1 = a0 + a1;                                               // 0x00138ba0: addu $v1, $a0, $a1
    a1 = a1 + 1;                                                // 0x00138ba4: addiu $a1, $a1, 1
    v0 = (a1 < a2) ? 1 : 0;                                     // 0x00138ba8: slt $v0, $a1, $a2
    /* nop */                                                   // 0x00138bac: nop 
    /* nop */                                                   // 0x00138bb0: nop 
    if (v0 != 0) goto label_0x138ba0;                           // 0x00138bb4: bnez $v0, 0x138ba0
    *(uint8_t*)(v1) = a3;                                       // 0x00138bb8: sb $a3, 0($v1)
label_0x138bbc:
    s0 = 0x20 << 16;                                            // 0x00138bbc: lui $s0, 0x20
    a1 = 0x22 << 16;                                            // 0x00138bc0: lui $a1, 0x22
    s0 = s0 + 0x2a24;                                           // 0x00138bc4: addiu $s0, $s0, 0x2a24
    a1 = &str_002251d0;  // "eewk is not alignment 64 byte\n"   // 0x00138bc8: addiu $a1, $a1, 0x51d0
    func_0010a570();  // 0x10a4d8                                // 0x00138bcc: jal 0x10a4d8
    a2 = g_00202a24;  // Global at 0x00202a24                   // 0x00138bd0: lw $a2, 0($s0)
    v1 = g_00202a24;  // Global at 0x00202a24                   // 0x00138bd4: lw $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x00138bdc: addiu $v1, $v1, 1
    g_00202a24 = v1;  // Global at 0x00202a24                   // 0x00138be0: sw $v1, 0($s0)
    return;                                                     // 0x00138be8: jr $ra
    sp = sp + 0x10;                                             // 0x00138bec: addiu $sp, $sp, 0x10
}