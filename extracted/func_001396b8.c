void func_001396b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x001396b8: lui $v0, 0x20
    v1 = v0 + 0x3260;                                           // 0x001396c0: addiu $v1, $v0, 0x3260
    a0 = 0x27;                                                  // 0x001396c4: addiu $a0, $zero, 0x27
label_0x1396c8:
    v0 = g_00203260;  // Global at 0x00203260                   // 0x001396c8: lb $v0, 0($v1)
    a0 = a0 + -1;                                               // 0x001396cc: addiu $a0, $a0, -1
    v0 = v0 ^ 0;                                                // 0x001396d0: xori $v0, $v0, 0
    if (v0 == 0) a1 = v1;                                       // 0x001396d4: movz $a1, $v1, $v0
    /* nop */                                                   // 0x001396d8: nop 
    if (a0 >= 0) goto label_0x1396c8;                           // 0x001396dc: bgez $a0, 0x1396c8
    v1 = v1 + 0x48;                                             // 0x001396e0: addiu $v1, $v1, 0x48
    return;                                                     // 0x001396e4: jr $ra
}