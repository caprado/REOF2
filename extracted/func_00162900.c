void func_00162900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 6 << 16;                                               // 0x00162900: lui $v0, 6
    v1 = 1 << 16;                                               // 0x00162904: lui $v1, 1
    a3 = 0x2000;                                                // 0x00162908: addiu $a3, $zero, 0x2000
    v0 = v0 | 0x952c;                                           // 0x0016290c: ori $v0, $v0, 0x952c
    v1 = v1 | 0x3c68;                                           // 0x00162910: ori $v1, $v1, 0x3c68
    *(uint32_t*)(a0) = v0;                                      // 0x00162914: sw $v0, 0($a0)
    *(uint32_t*)(a1) = v1;                                      // 0x00162918: sw $v1, 0($a1)
    *(uint32_t*)(a2) = a3;                                      // 0x0016291c: sw $a3, 0($a2)
    v0 = *(int32_t*)(a0);                                       // 0x00162920: lw $v0, 0($a0)
    v1 = *(int32_t*)(a1);                                       // 0x00162924: lw $v1, 0($a1)
    v0 = v0 + v1;                                               // 0x00162928: addu $v0, $v0, $v1
    return;                                                     // 0x0016292c: jr $ra
    v0 = v0 + a3;                                               // 0x00162930: addu $v0, $v0, $a3
}