void func_001d8c50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001d8c50: addiu $sp, $sp, -0xa0
    at = 0x31 << 16;                                            // 0x001d8c64: lui $at, 0x31
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d8c68: lw $s0, 0x37fc($at)
    a1 = 0x24 << 16;                                            // 0x001d8c6c: lui $a1, 0x24
    a0 = sp + 0x20;                                             // 0x001d8c70: addiu $a0, $sp, 0x20
    func_0010a570();  // 0x10a4d8                                // 0x001d8c74: jal 0x10a4d8
    a1 = &str_002477e0;  // "data\\rom\\scene\\pit_tex\\demo_com.tex" // 0x001d8c78: addiu $a1, $a1, 0x77e0
    a0 = sp + 0x20;                                             // 0x001d8c7c: addiu $a0, $sp, 0x20
    a2 = 1;                                                     // 0x001d8c84: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d8c88: jal 0x1d3390
    if (a2 <= 0) goto label_0x1d8cb0;                           // 0x001d8c94: blez $a2, 0x1d8cb0
    a1 = 0x49 << 16;                                            // 0x001d8c98: lui $a1, 0x49
    a1 = a1 + 0x13d0;                                           // 0x001d8ca0: addiu $a1, $a1, 0x13d0
    a3 = 0xc8;                                                  // 0x001d8ca4: addiu $a3, $zero, 0xc8
    func_001d87d0();  // 0x1d87a0                                // 0x001d8ca8: jal 0x1d87a0
label_0x1d8cb0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d8cb4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8cb8: jr $ra
    sp = sp + 0xa0;                                             // 0x001d8cbc: addiu $sp, $sp, 0xa0
}