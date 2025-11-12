void func_0016c220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016c220: addiu $sp, $sp, -0x10
    s0 = *(int32_t*)((a1) + 0x9fc);                             // 0x0016c230: lw $s0, 0x9fc($a1)
    v0 = *(int32_t*)((a1) + 0x2c);                              // 0x0016c234: lw $v0, 0x2c($a1)
    v1 = ~(0 | s0);                                             // 0x0016c238: nor $v1, $zero, $s0
    if (v1 == 0) s0 = v0;                                       // 0x0016c23c: movz $s0, $v0, $v1
    a1 = (v0 < s0) ? 1 : 0;                                     // 0x0016c240: slt $a1, $v0, $s0
    func_001702f0();  // 0x170250                                // 0x0016c244: jal 0x170250
    if (a1 != 0) s0 = v0;                                       // 0x0016c248: movn $s0, $v0, $a1
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x0016c24c: slt $v0, $v0, $s0
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0016c258: sltiu $v0, $v0, 1
    return;                                                     // 0x0016c25c: jr $ra
    sp = sp + 0x10;                                             // 0x0016c260: addiu $sp, $sp, 0x10
}