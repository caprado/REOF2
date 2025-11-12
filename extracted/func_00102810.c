void func_00102810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1000 << 16;                                          // 0x00102810: lui $v0, 0x1000
    a0 = 1;                                                     // 0x00102814: addiu $a0, $zero, 1
    v0 = v0 | 0x3810;                                           // 0x00102818: ori $v0, $v0, 0x3810
    v1 = 0x1000 << 16;                                          // 0x0010281c: lui $v1, 0x1000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00102820: sw $a0, 0($v0)
    v1 = v1 | 0x3820;                                           // 0x00102824: ori $v1, $v1, 0x3820
    v0 = 6;                                                     // 0x00102828: addiu $v0, $zero, 6
    return;                                                     // 0x0010282c: jr $ra
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00102830: sw $v0, 0($v1)
}