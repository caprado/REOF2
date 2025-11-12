void func_001628d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 2 << 16;                                               // 0x001628d0: lui $v0, 2
    a3 = 0x800;                                                 // 0x001628d4: addiu $a3, $zero, 0x800
    v0 = v0 | 0x49e4;                                           // 0x001628d8: ori $v0, $v0, 0x49e4
    v1 = 0x6d60;                                                // 0x001628dc: addiu $v1, $zero, 0x6d60
    *(uint32_t*)(a0) = v0;                                      // 0x001628e0: sw $v0, 0($a0)
    *(uint32_t*)(a1) = v1;                                      // 0x001628e4: sw $v1, 0($a1)
    *(uint32_t*)(a2) = a3;                                      // 0x001628e8: sw $a3, 0($a2)
    v0 = *(int32_t*)(a0);                                       // 0x001628ec: lw $v0, 0($a0)
    v1 = *(int32_t*)(a1);                                       // 0x001628f0: lw $v1, 0($a1)
    v0 = v0 + v1;                                               // 0x001628f4: addu $v0, $v0, $v1
    return;                                                     // 0x001628f8: jr $ra
    v0 = v0 + a3;                                               // 0x001628fc: addu $v0, $v0, $a3
}